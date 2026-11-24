#include <stdio.h>
#include <assert.h>
#include "operands.h"

void test_operands() {
    int ops[3] =  {10, 3};
    Operands opers = {ops, 1};
    put_op(&opers, 4);
    assert(opers.head == 2);
    assert(opers.ops[opers.head] == 4);
    make_operation(&opers, '+');
    assert(opers.ops[opers.head] == 7);
    make_operation(&opers, ('-'));
    assert(opers.ops[opers.head] == 3);
}

int main () {
    test_operands();

    printf("All tests complete!");
}
