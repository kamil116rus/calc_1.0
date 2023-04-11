#include <stdio.h>

#include "polish_notation.h"
#include "stack.h"

int main() {
    char a = 'q';
    char b = 'w';
    char c = 'e';
    stack *p = NULL;
    push(&p, a);
    printf("%c\n", p->c);
    push(&p, b);
    printf("%c\n", p->c);
    push(&p, c);
    printf("%c\n", p->c);
    while (p != NULL) {
        printf("%c\n", pop(&p));
    }

    return 0;
}