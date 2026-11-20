#include <stdio.h>
#include <string.h>

#include "name.h"

void printStats(NameStats* nameStats, AgeStats *ageStats) {
    printf("%s %d\n", "names: total = ", nameStats->cntTotal);
    printf("%s %d\n", "names: long = ", nameStats->cntLong);
    printf("%s %d\n", "ages: total = ", ageStats->cntTotal);
    printf("%s %d\n", "ages: adult = ", ageStats->cntAdults);
    printf("%s %d\n", "ages: kids = ", ageStats->cntKids);
}


bool isNameLong(const char name[]){
    if (strlen(name) >= 10) {
        return 1;
    }
    return 0;
}

bool isAgeAdult(const int age){
    if (age >= 18) {
        return 1;
    }
    return 0;
}

bool isAgeKid(const int age){
    if (age < 14) {
        return 1;
    }
    return 0;
}
    
void calcStats (const Label *person, NameStats *oNameStats, AgeStats *oAgeStats) {
        oNameStats -> cntTotal++;
        oAgeStats -> cntTotal++;
        if (isNameLong(person -> name)) {
            oNameStats -> cntLong ++;
        }
        if (isAgeAdult(person -> age)) {
            oAgeStats -> cntAdults++;
        }
        if (isAgeKid(person -> age)) {
            oAgeStats -> cntKids++;
        }
    }