#include <stdio.h>

#include "answers.h"

//Переделать через input файл
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int answers[n];

    int time;
    for (int i = 0; i < n; i++) {
        scanf("%d", &time);
        answers[i] = 0;
        add_answer(answers, i, time, m);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", answers[i]+1);
       
   }
}