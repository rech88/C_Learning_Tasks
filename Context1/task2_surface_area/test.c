#include <stdio.h>
#include <assert.h>

#include "area.h"

void test_valid_area()
{
    assert(calculate_area(3, 4, 5) == 94);
    assert(calculate_area(1, 2, 3) == 22);
    assert(calculate_area(1, 1, 1) == 6);
}

void test_invalid_area()
{
    assert(calculate_area(-2, 0, -1) == -1);
    assert(calculate_area(0, 0, 0) == -1);
    assert(calculate_area(1, -1, -1) == -2);
    assert(calculate_area(1, 0, 0) == -2);
    assert(calculate_area(1, 1, -1) == -3);
    assert(calculate_area(1, 1, 0) == -3);
}

int main()
{
    test_valid_area();
    test_invalid_area();

    printf("All tests passed successfully\n");
}
