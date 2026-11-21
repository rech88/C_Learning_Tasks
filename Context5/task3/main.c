#include <stdio.h>

#include "desk.h"

int main() {

    int n;
    scanf("%d", &n);
    
    Desk l_desk = {{0}, 0, 0};
    for (int i = n; i > 0; i--) {
        addCard(&l_desk, i, 1);
    }
    
    Desk r_desk = {{0}, 0, 0};
    for (int i = n; i > 0; i--) {
        addCard(&r_desk, -(i), 1);
    }


    int hex;
    scanf("%x1", &hex);
    operation(&l_desk, &r_desk, hex);

    showDesk(&l_desk);
    showDesk(&r_desk);
}
    
