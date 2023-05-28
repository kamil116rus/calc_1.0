#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum type_t { DELIMETR, VARIABLE, NUMBER } type_t;

typedef struct list {
    char leks[5];
    type_t token_type;
    struct list *next;
} list;

void init(list **top, char *str, type_t type);
void print_list(list *p);
void delete_list(list **p);
void push_the_list(list **top, char *str, type_t type);

#endif
