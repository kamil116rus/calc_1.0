#include <string.h>

#define YES 1
#define NO 0
#define ISALFA "[A-Za-z]"

void *parser(char *str) {}

int is_digit(char c) {
    int res = NO;
    if (c >= 48 && c <= 57) {
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