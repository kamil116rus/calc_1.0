#include "polish_notation.h"

int reverse_polish_notation(char *str) {
    printf("Введите  выражение:\n");
    int res = SUCCES;       // валидность выражения
    int count_staples = 0;  // счетчик скобок
    int i = 0, count = 0;
    char *temp = calloc(MAX_STR, sizeof(char));
    stack *p = NULL;

    while ((str[i] != '\n' || str[i] != '\0') && res != FAIL) {
        if (is_digit(str[i])) {
            while (is_digit(str[i])) {  // Вариант обработки через функцию
                temp[count] = str[i];
                i++;
                count++;
            }
            temp[count] = '_';
            count++;
        }
        if (str[i] == '(') {
            push(&p, '(');
            count_staples++;
        } else if (str[i] == ')') {
            if (count_staples > 0) {
                while (p != NULL || p->value != '(') {
                    temp[count] = (char)pop(&p);
                    count++;
                }
                pop(&p);          // удаляем скобку из стэка
                count_staples--;  // уменьшаем счетчик скобок
            } else {
                res = FAIL;
                continue;
            }
        }
        if (str[i] == ISALFA) {  // Вариант обработки через define
            if (str[i] == 'x' || str[i] == 'X') {
                temp[count] = 'x';
                count++;
            }
            if (is_) }
    }
}

int is_digit(char c) {
    int res = NO;
    if (c >= 48 && c <= 57) {
        res = YES;
    }
    return res;
}