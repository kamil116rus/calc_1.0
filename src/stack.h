#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    char c;
    struct stack *next;
} stack;

void push(stack **p, char c);
char pop(stack **p);

#endif