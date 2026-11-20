#include <stdio.h>

#include "devision_numbers.h"

int main() {
    int a;
    int b;
    scanf("%d" "%d", &a, &b);
    printf("%d " "%d " "%d " "%d",  rounddown(a, b), roundup(a, b),
            roundNull(a, b), get_remainder(a, b));
}

