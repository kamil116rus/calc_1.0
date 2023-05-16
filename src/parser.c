#include "parser.h"

void parser(list **p) {
    char c;
    getch(&c);
    while (c != '\n') {
        char temp[10];
        int j = 0;
        if (is_space(c)) {
            getch(&c);
        }
        if (is_digit(c)) {
            while (is_digit(c)) {
                temp[j] = c;
                j++;
                getch(&c);
            }
            temp[j] = '\0';
            push_the_list(p, temp, NUMBER);  // заменить на список
                                             // print_list(p);
        }
        if (is_alfa(c)) {
            j = 0;
            while (is_alfa(c)) {
                temp[j] = c;
                getch(&c);
                j++;
            }
            temp[j] = '\0';
            push_the_list(p, temp, VARIABLE);  // printf("%s\n", temp);  // заменить на список
        }
        if (is_delim(c)) {
            temp[0] = c;
            temp[1] = '\0';
            push_the_list(p, temp, DELIMETR);  // printf("%c\n", c);  // заменить на список
            getch(&c);
        }
    }
}

void getch(char *c) { *c = getchar(); }

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