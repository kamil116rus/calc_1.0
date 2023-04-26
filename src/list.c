#include "list.h"

list *init() {
    list *temp = calloc(1, sizeof(list));
    temp->next = NULL;
    return temp;
}

void push_the_list(list *top, size_t *str, type_t type) {
    while (top->next != NULL) {
        push_the_list(top->next, str, type);  //идем в конец списка
    }
    list *temp = NULL;
    temp = init();
    if (temp != NULL) {
        temp->token_type = type;
        temp->leks = str;
        top->next = temp;
    } /*иначе ошибка дописать*/
}
