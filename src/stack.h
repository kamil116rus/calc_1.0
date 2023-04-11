#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    size_t c;
    struct stack *next;
} stack;

void push(stack **p, size_t c);
size_t pop(stack **p);

#endif