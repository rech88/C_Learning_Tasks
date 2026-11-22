    #include <stdio.h>
    #include <assert.h>

    #include "desk.h"

    void testDesk() {
        Desk l_desk;
        init_desk(&l_desk, 5);
        for (int i = 5; i > 0; i--) {
            addCard(&l_desk, i, 1);
        }
        

        Desk r_desk;
        init_desk(&r_desk, 5);
        for (int i = 5; i > 0; i--) {
            addCard(&r_desk, -(i), 1);
        }

        operation(&l_desk, &r_desk, 14);
        int a[] = {-4, -3, -2, -1, -5};
        for (int i = r_desk.bottom + 1; i < r_desk.top; i++) {
            assert((r_desk.desk[i]) == a[i-(r_desk.bottom+1)]);
        }
    }

    int main() {

        testDesk();

        printf("%s", "All tests complited");
    }