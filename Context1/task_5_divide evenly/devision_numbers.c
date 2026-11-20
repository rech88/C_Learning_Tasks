#include <stdio.h>
#include "devision_numbers.h"

int roundup(int a, int b) {
    if (a > 0)
        return (a / b) + 1;
    return a / b;
    }

int rounddown(int a, int b) {
    if (a > 0)
        return a / b;
    return (a / b) -1;
}

int roundNull(int a, int b) {
    return a / b;
}

int get_remainder(int a, int b) {
    return (a - rounddown(a, b) * b);
}