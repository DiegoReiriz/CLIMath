#ifndef ERROR_H_
#define ERROR_H_

  enum errors {
      ERROR_NOT_INITIALICED_VARIABLE,
      ERROR_OVERWITE,
      ERROR_MISSMATCHING_BRACKETS,
      ERROR_WRONG_OPERATOR,
      ERROR_DIVISION_BY_ZERO,
      ERROR_NOT_A_FUNCTION,
      ERROR_FILE_NOT_EXISTS,
      ERROR_VALUE_OF_FUNCTION};

  void showError(enum errors code, int line);

#endif
