#ifndef PARSER_H
#define PARSER_H

#define YES 1
#define NO 0
#define ISALFA "[A-Za-z]"

void parser();
void getch(char *c);
int is_digit(char c);
int is_space(char c);
int is_delim(char c);

#endif