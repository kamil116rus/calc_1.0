#include "stack.h"

void push(stack **p, size_t c) {
    stack *temp = NULL;
    temp = calloc(1, sizeof(stack));
    temp->c = c;
    temp->next = *p;
    *p = temp;
}

size_t pop(stack **p) {
    stack *temp = *p;
    size_t c;
    c = temp->c;
    *p = temp->next;
    free(temp);
    return c;
}