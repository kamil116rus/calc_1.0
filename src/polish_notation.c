#include "polish_notation.h"

char *input_str() {
    printf("Введите  выражение:\n");
    char *str;
    str = calloc(MAX_STR, sizeof(char));
    int i = 0, res = SUCCES;
    while (str[i] = getchar()) {
        i++;
        if (i > MAX_STR - 1) {
            res = FAIL;
            break;
        }
    }
    return str;
}
