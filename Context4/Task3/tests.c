#include <stdio.h>
#include <assert.h>

#include "name.h"

void test_name() {
    Label arr[] = {{"Anna", 12}, {"Sasha", 18}, {"Tutankhamon", 15}};
    NameStats nameStats = {0, 0};
    AgeStats ageStats = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        calcStats(&arr[i], &nameStats, &ageStats);
    }

    assert(nameStats.cntTotal == 3);
    assert(nameStats.cntLong == 1);
    assert(ageStats.cntTotal == 3);
    assert(ageStats.cntKids == 1);
    assert(ageStats.cntAdults == 1);
}

int main() {
    test_name();

    printf("All tests complete!");
}
