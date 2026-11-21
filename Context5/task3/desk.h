#pragma once
#define N 1000

/**
 * Структура описывает карту 
 * @param desk представляющий колоду массив (содержит до 10^6 карт)
 * @param bottom нижняя карта колоды
 * @param top верхняя карта колоды 
 */
typedef struct Desk{
    int desk[N];
    int bottom;
    int top;
} Desk;

/**
 * Добавляет карту со значением value в колоду desk
 * end = 0 - добавить карту снизу колоды; end = 1 - добавить карту сверху колоды
 */
void addCard(Desk* desk, int value, int end);

/**
 * Взять карту из колоды desk
 * end = 0 - взять карту снизу колоды; end = 1 - взять карту сверху колоды
 * @return возвращает полученую карту
 */
int getCard(Desk* desk, int end);

/**
 * Совершает одну операцию над колодами l_desk и r_desk
 * по заданым правилам в зависимости от значения шеснадцатиричной цифры hex 
 * (правила см в реалезации): 
 */
void operation(Desk* l_desk, Desk* r_desk, int hex);

/**
 * Выводит в консоль содержимое колоды desk в виде:
 * (Количество элементов) (1 элемент) (2 элемент) ...
 */
void showDesk(Desk* desk);
