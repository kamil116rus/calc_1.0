#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef enum type_t { DELIMETR, VARIABLE, NUMBER } type_t;

typedef struct list {
    size_t *leks;
    type_t token_type;
    struct list *next;
} list;

list *init();
void push_the_list(list *top, size_t *str, type_t type);

#endif
