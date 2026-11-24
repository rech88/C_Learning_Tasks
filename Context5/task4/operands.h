#pragma once

/**
 * Структура описывает стек операндов.
 * @param ops указатель на начало стека с операндами
 * @param head номерверхнего операнда стека
 */
typedef struct Operands {
    int * ops;
    int head;
} Operands;

/**
 * Добавляет операнд на вершину стека ops
 * @param ops указатель на стек
 */
void put_op(Operands * ops, int operand);

/**
 * Совершает операцию operation над двумя верхними элементами стека ops
 * @param ops указатель на стек
 * @param operation единственный символ операции ('+', '-' или '*')
 */
void make_operation(Operands * ops, char operation);