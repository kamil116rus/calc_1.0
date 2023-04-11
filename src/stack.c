#include "stack.h"

void push(stack **p, size_t value) {
    stack *temp = NULL;
    temp = calloc(1, sizeof(stack));
    temp->value = value;
    temp->next = *p;
    *p = temp;
}

size_t pop(stack **p) {
    stack *temp = *p;
    size_t value;
    value = temp->value;
    *p = temp->next;
    free(temp);
    return value;
}