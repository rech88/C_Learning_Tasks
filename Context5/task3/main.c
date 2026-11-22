#include <stdio.h>

#include "desk.h"

int main() {

    int n;
    int m;
    scanf("%d %d", &n, &m);
    
    Desk l_desk;
    init_desk(&l_desk, n);
    for (int i = n; i > 0; i--) {
        addCard(&l_desk, i, 1);
    }
    
    Desk r_desk;
    init_desk(&r_desk, n);
    for (int i = n; i > 0; i--) {
        addCard(&r_desk, -(i), 1);
    }


    int hex;
    for(int i = 0; i < m; i++){
        scanf("%1x", &hex);
        operation(&l_desk, &r_desk, hex);
    }
    showDesk(&l_desk);
    showDesk(&r_desk);
}
    
