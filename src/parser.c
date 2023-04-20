#include "parser.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_alfa(char c);

void parser() {
    char c;
    c = getchar();
    while (c != '\n') {
        if (is_space(c)) {
            c = getchar();
        }
        char temp[10];
        int j = 0;
        if (is_digit(c)) {
            while (is_digit(c)) {
                temp[j] = c;
                j++;
                c = getchar();
            }
            temp[j] = '\0';
            printf("%s\n", temp);
        }
        j = 0;
        if (is_alfa(c)) {
            while (is_alfa(c)) {
                temp[j] = c;
                c = getchar();
                j++;
            }
            temp[j] = '\0';
            printf("%s\n", temp);
        }
        if (is_delim(c)) {
            printf("%c\n", c);
            c = getchar();
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

int is_alfa(char c) {
    int res = NO;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        res = YES;
    }
    return res;
}

int is_space(char c) {
    int res = NO;
    if (c == ' ' || c == '\t' || c == '\r') {
        res = YES;
    }
    return res;
}

int is_delim(char c) {
    int res = NO;
    if (strchr("+-/*%^=()", c) /*|| c==9 || c=='\r' || c==0*/) {
        res = YES;
    }
    return res;
}