#include "list.h"

typedef enum type_t { DELIMETR, VARIABLE, NUMBER } type_t;

typedef struct list {
    size_t *leks;
    type_t token_type;
    struct list *next;
} list;

list *init() {
    list *temp = calloc(1, sizeof(list));
    return temp;
}

void push(list **top, size_t *str, type_t type) {}
