#pragma once

/**
 * Структура содержит id записи (целое число)
 * и значение записи (строку длинной
 * не более 7 символов)
 */
typedef struct Record {
    int id;
    char value[7];
} Record;

/**
 * Добавляет новый элемент newRecord
 * в массив recArr, размера size, содержащий len элементов
 */
void addRecord(Record **recArr, Record *newRecord, int *size, int *len);

/**
 * Сравнивет записи по id:
 * если 1 элемент больше возвращает 1, меньше - -1
 */
int compare_records(const void *a, const void *b);
