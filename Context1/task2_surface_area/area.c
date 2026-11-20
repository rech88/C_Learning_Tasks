#include <stdio.h>

int calculate_area(const int x, const int y, const int z) {
    if (x <= 0) {
        return -1;
    }
    if (y <= 0) {
        return -2;
    }
    if (z <= 0) {
        return -3;
    }
    return 2 * (x*y + y*z + z*x);
}
