#include <stdio.h>
#include <assert.h>

#include "answers.h"

void test_answers() {
    int n[4] = {0};
    add_answer(n, 0, 1000, 100);
    add_answer(n, 1, 1001, 100);
    add_answer(n, 2, 1100, 10);
    add_answer(n, 3, 2001, 1000);
    assert(n[0] == 0);
    assert(n[1] == 1);
    assert(n[2] == 0);
    assert(n[3] == 2);
}

int main() {
    test_answers();

    printf("All tests completed");
}
