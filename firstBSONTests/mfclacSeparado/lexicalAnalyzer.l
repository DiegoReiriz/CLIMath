%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mfcalc.tab.h"
#include "SymbolTable.h"

int numeroLineas=0;
YY_BUFFER_STATE buffer;
%}

%option noyywrap

Character		[a-zA-Z]

Digit				[0-9]

Integer     {Digit}+

Identifier	({Character}|[_])+({Character}|[_]|[0-9])*

Float				{Digit}+(\.{Digit}+)?(e[+-]{Digit}+){0,1}

Help        \:\?
Quit        \:q
Load        \:l[ ][^\0\n]+

/*=========*/
/* ESTADOS */
/*=========*/

%%
<<EOF>>           { yy_delete_buffer( YY_CURRENT_BUFFER );
                    yy_switch_to_buffer(buffer);

                    return END_OF_FILE;}
{Quit}            return QUIT;
{Help}            return HELP;
{Load}            { buffer = YY_CURRENT_BUFFER;
                    yyin = fopen(&yytext[3],"r");

                    yy_switch_to_buffer(
                        yy_create_buffer( yyin, YY_BUF_SIZE ) );

                    BEGIN(INITIAL);

                    return '\n';
                  }
{Integer}         {yylval.NUM = atof(yytext); return NUM;}
{Float}						{yylval.NUM = atof(yytext); return NUM;}
{Identifier}			{
                    symrec *s;
                    s = symbolTableAnalyze(symbolTable,yytext);

                    if (s == 0)
                      s = symbolTableInsert(symbolTable,yytext, VAR);

                    *((symrec**) &yylval) = s;

                    return VAR;}
[ \t\r]						/* NOTHING */
[\n]						  {numeroLineas++; return yytext[0];}
\/	|
\.	|
-	|
\+	|
\(	|
\)	|
\[	|
\]	|
\{	|
\}	|
\?	|
,	|
! |
;	|
=	|
\*	|
\^	return yytext[0];

.	/* IGNORES ALL*/

%%