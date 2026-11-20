#include <stdio.h>
#include <assert.h>

#include "primary.h"

void test_prime() {
    assert(check_primary(2));  
    assert(check_primary(3));
    assert(check_primary(5));
    assert(check_primary(11));
    assert(check_primary(13));
}

void test_non_prime() {
    assert(!check_primary(1));
    assert(!check_primary(4));
    assert(!check_primary(24));
    assert(!check_primary(10));
}

int main() {

    test_prime();
    test_non_prime();

    printf("All tests success!");
    return 0;
}