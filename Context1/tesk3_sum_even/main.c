#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    int element;
    for (int i = 0; i < n; i++){
        scanf("%d", &element);
        if (element % 2 == 0) {
            sum += element;
        }
    }
    printf("%d", sum);
}
