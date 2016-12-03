/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MFCALC_TAB_H_INCLUDED
# define YY_YY_MFCALC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 20 "mfcalc.y" /* yacc.c:1909  */

  #include "SymbolTable.h"
  #include "errors.h"

#line 49 "mfcalc.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END_OF_FILE = 258,
    SHOW_CONSTANTS = 259,
    SHOW_FUNCTIONS = 260,
    SHOW_VARIABLES = 261,
    HELP = 262,
    QUIT = 263,
    NUM = 264,
    VAR = 265,
    FNCT = 266,
    NEG = 267
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

  /* SHOW_CONSTANTS  */
  double SHOW_CONSTANTS;
  /* SHOW_FUNCTIONS  */
  double SHOW_FUNCTIONS;
  /* SHOW_VARIABLES  */
  double SHOW_VARIABLES;
  /* HELP  */
  double HELP;
  /* QUIT  */
  double QUIT;
  /* NUM  */
  double NUM;
  /* exp  */
  double exp;
  /* END_OF_FILE  */
  int END_OF_FILE;
  /* VAR  */
  symrec* VAR;
  /* FNCT  */
  symrec* FNCT;
#line 95 "mfcalc.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MFCALC_TAB_H_INCLUDED  */
