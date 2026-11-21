#include <stdio.h>

#include "desk.h"

/**
 * Если x >= 8 - берем из правой колоды, иначе - из лево1
 * Если x-8 >= 4 - берем снизу колоды, иначе - сверху
 * Если x-8-4 >= 2 - положить карту в правую колоду, иначе - в левую
 * Если x-8-4-2 ==1 - положить карту снизу, иначе - сверху
 */
void operation(Desk* l_desk, Desk* r_desk, int hex) {
    int is_get_desk_r = 0, is_get_end_top = 0, is_add_desk_r = 0, is_add_end_top = 0;
    //Вычисляем что будем делать
    if(hex >= 8){
        hex -= 8;
        is_get_desk_r++;
    }
    if(hex >= 4){
        hex -= 4;
        is_get_end_top++;
    }
    if(hex >= 2){
        hex -= 2;
        is_add_desk_r++;
    }
    if(hex == 1){
        is_add_end_top++;
    }

    //применяем условия
    if(is_get_desk_r) {
        if ((r_desk->bottom+1)%N != r_desk->top) {
            int card = getCard(r_desk, !is_get_end_top);
            
            if(is_add_desk_r){
                addCard(r_desk, card, !is_add_end_top);
            }
            else {
                addCard(l_desk, card, !is_add_end_top);
            }
        }
    }

    else {
        if ((l_desk->bottom+1)%N != l_desk->top) {
            int card = getCard(l_desk, !is_get_end_top);
            if(is_add_desk_r){
                addCard(r_desk, card, !is_add_end_top);
            }
            else {
                addCard(l_desk, card, !is_add_end_top);
            }
    }
    }
}

void addCard (Desk* desk, int value, int end){
    if ((desk->top+1)%N != desk->bottom) {
        if (end == 1){
            if (desk->top < N-1) {
                desk->desk[desk->top++] = value;
            }
            else {
                desk->desk[desk->top] = value;
                desk->top = 0;
            }
        }

        else {
            if (desk->bottom > 0) {
                desk->desk[desk->bottom--] = value;
            }
            else {
                desk->desk[desk->bottom] = value;
                desk->bottom = N-1;
            }
        }
    }
}

int getCard(Desk* desk, int end) {
        if (end == 1){
            if (desk->top > 0) {
                return (desk->desk[--desk->top]);
            }
            else {
                desk->top = N-1;    
                return (desk->desk[desk->top]);
            }
        }
        
        else {
            if (desk->bottom < N-1) {
                return (desk->desk[++desk->bottom]);
            }
            else {
                desk->bottom = 0;
                return (desk->desk[desk->bottom]);
            }
        }
}

void showDesk(Desk* desk) {
    int count = (desk->top - desk->bottom - 1 + N) % N;
    printf("%d", count);
    for (int i = 1; i <= count; i++) {
        int idx = (desk->top - i + N) % N;
        printf(" %d", desk->desk[idx]);
    }
    printf("\n");
}
