#ifndef POLISH_NOTATION_H
#define POLISH_NOTATION_H

#include <stdio.h>

#include "stack.h"
#define MAX_STR 100
#define SUCCES 1
#define FAIL 0

#define YES 1
#define NO 0

#define ISALFA "[A-Za-z]"

int reverse_polish_notation(char *str);

int is_digit(char c);

#endif
