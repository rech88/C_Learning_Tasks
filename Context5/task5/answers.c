#include "answers.h"
#define N 100000

void add_answer(int * answers, int i, int time, int m) {
    static int times[N];
    times[i] = time;

    int j = i;
    while ((times[--j] >= (time-m)) && (j >= 0)) {
        answers[i]++;
    }
}