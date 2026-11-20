#include <stdio.h>

int main() {
    int max_el = -10001;
    int max_el_num;
    int min_el = 10001;
    int min_el_num;

    int n;
    scanf("%d", &n);
    
    int element;
    for (int i = 0; i < n; i++) {
        scanf("%d", &element);

        if (element > max_el) {
            max_el = element;
            max_el_num = i+1;
        } 
        if (element < min_el) {
            min_el = element;
            min_el_num = i+1;
        }
    }

    printf("%d %d %d %d", min_el, min_el_num, max_el, max_el_num);
}