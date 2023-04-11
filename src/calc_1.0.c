#include <stdio.h>

#include "polish_notation.h"
#include "stack.h"

int main() {
    char a = 'q';
    char b = 'w';
    char c = 'e';
    stack *p = NULL;
    push(&p, a);
    printf("%c\n", (char)p->value);
    push(&p, b);
    printf("%c\n", (char)p->value);
    push(&p, c);
    printf("%c\n", (char)p->value);
    while (p != NULL) {
        printf("%c\n", (char)pop(&p));
    }

    return 0;
}