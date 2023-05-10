#include "list.h"

list *init(char *str, type_t type) {
    list *temp = calloc(1, sizeof(list));
    temp->next = NULL;
    temp->token_type = type;
    *temp->leks = *str;
    // printf("-%s\n", temp->leks);
    return temp;
}

void push_the_list(list *top, char *str, type_t type) {
    if (top == NULL) {
        top = init(str, type);
        printf("-%s\n", top->leks);
    } else if (top->next != NULL) {
        push_the_list(top->next, str, type);  //идем в конец списка
    } else {
        list *temp = NULL;
        temp = init(str, type);
        printf("-%s\n", str);
        if (temp != NULL) {
            *top->next = *temp;
        }
    } /*иначе ошибка дописать*/
}

void print_list(list *p) {
    if (p != NULL) {
        if (p->next != NULL) {
            printf("%s\n", p->leks);
            print_list(p->next);
        }
    }
}
