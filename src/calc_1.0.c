#include "calc_1.0.h"

#include <stdio.h>
#include <stdlib.h>

//#include "polish_notation.h"
//#include "stack.h"
#include "calc_1.0.h"
#include "list.h"
#include "parser.h"

int main() {
    list *p_in = NULL;
    errors error;

    parser(&p_in);
    // list *p_rpn = NULL;
    print_list(p_in);
    delete_list(&p_in);
    return 0;
}