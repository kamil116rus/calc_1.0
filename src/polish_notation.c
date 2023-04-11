#include "polish_notation.h"

int reverse_polish_notation(char *str) {
    printf("Введите  выражение:\n");
    int res = SUCCES;       // валидность выражения
    int count_staples = 0;  // счетчик скобок
    int i = 0, count = 0;
    char *temp = calloc(MAX_STR, sizeof(char));

    while (str[i] != '\n' || str[i] != '\0') {
        if (is_digit(str[i])) {
            while (is_digit(str[i])) {
                temp[count] = str[i];
                i++;
                count++;
            }
            temp[count] = ' ';
            count++;
        }
        if (str[i] == 'x' || str[i] == 'X') {
            temp[count] = str[i];
        }
    }
}

int is_digit(char c) {
    int res = NO;
    if (c >= 48 && c <= 57) {
        res = YES;
    }
    return res;
}