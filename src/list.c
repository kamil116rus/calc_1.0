#include "list.h"

void init(list **top, char *str, type_t type) {
    list *temp = calloc(1, sizeof(list));
    temp->next = NULL;
    temp->token_type = type;
    strcat(temp->leks, str);
    *top = temp;
}

void push_the_list(list **top, char *str, type_t type) {
    printf("dsfg");
    if (*top == NULL) {
        printf("top ==NULL\n");
        list *temp = NULL;
        init(&temp, str, type);
        *top = temp;
        printf("--%s\n", (*top)->leks);
    } else if ((*top)->next != NULL) {
        printf("Идем в конец списка)\n");
        push_the_list(&(*top)->next, str, type);  //идем в конец списка
    } else {
        printf("top != NULL\n");
        list *temp = NULL;
        init(&temp, str, type);
        printf("-%s\n", str);
        if (temp != NULL) {
            (*top)->next = temp;
        }
        //  printf("-%s\n", top-);
    } /*иначе ошибка дописать*/
}

void print_list(list *p) {
    if (p != NULL) {
        printf("%s\n", p->leks);
        if (p->next != NULL) {
            print_list(p->next);
        }
    }
}
