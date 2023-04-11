#include "stack.h"

void push(stack **p, char c) {
    stack *temp = NULL;
    temp = calloc(1, sizeof(stack));
    temp->c = c;
    temp->next = *p;
    *p = temp;
}

char pop(stack **p) {
    stack *temp = *p;
    char c;
    c = temp->c;
    *p = temp->next;
    free(temp);
    return c;
}