#include "operands.h"

void put_op(Operands *ops, int operand) {
    ops->ops[++ops->head] = operand;
}

void make_operation(Operands *ops, char operation) {
    if (operation == '+') {
        (ops->ops[--ops->head] = ops->ops[ops->head] + ops->ops[ops->head-1]) %(10^9 + 7);
    }
    else if (operation == '-') {
        (ops->ops[--ops->head] = ops->ops[ops->head-1] - ops->ops[ops->head]) %(10^9 + 7);
    }
    else {
        (ops->ops[--ops->head] = ops->ops[ops->head] * ops->ops[ops->head-1]) %(10^9 + 7);
    }
}