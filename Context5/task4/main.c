#include <stdio.h>

#include "operands.h"

int main() {
    int n;
    scanf("%d ", &n);

    int ops[n];
    Operands operands = {.ops = ops, .head = 0};

    char ch;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch); //Почему без пробела перед %с не работает?

        if (('0' <= ch) && (ch <= '9')) {
            put_op(&operands, ch-'0');
        }
        
        else if ((ch == '-') || (ch == '+') || (ch == '*'))
        {
            make_operation(&operands, ch);
        }
        
        else {
            printf("Incorect input");
            return 1;
        }
    }
    printf("%d", operands.ops[operands.head]);
    return 0;
}