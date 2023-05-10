#include "calc_1.0.h"

#include <stdio.h>
#include <stdlib.h>

//#include "polish_notation.h"
//#include "stack.h"
#include "list.h"
#include "parser.h"

int main() {
    list *p = NULL;
    // p = init();
    parser(p);
    print_list(p);
    // free(str);
    return 0;
}