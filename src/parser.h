#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

void parser(list **p);
void getch(char *c);
int is_digit(char c);
int is_space(char c);
int is_delim(char c);
int is_alfa(char c);

typedef struct errors {
    int memory;
    int staples;
    int unknown_argument;
} errors;

errors init_errors();

#endif