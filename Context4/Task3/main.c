#include <stdio.h>
#include "name.h"

int main() {
    int n;
    scanf("%d", &n);

    NameStats nameStats = {0, 0};
    
    AgeStats ageStats = {0, 0, 0};

    Label person;

    for (int i = 0; i < n; i++) {
        scanf("%s %d let", person.name, &person.age);
        calcStats(&person, &nameStats, &ageStats);
    }
    printStats(&nameStats, &ageStats);
}