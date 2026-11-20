#include <stdio.h>

#include "primary.h"

int main() {
    int n;
    scanf("%d", &n);
    if(check_primary(n)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
