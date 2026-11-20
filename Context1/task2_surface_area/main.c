#include <stdio.h>

#include "area.h"

int main() {
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", calculate_area(x,y,z));
    return 0;
}
