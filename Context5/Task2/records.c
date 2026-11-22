#include <stdlib.h>

#include "records.h"

void addRecord(Record **recArr, Record *newRecord, int *size, int *len)
{
    if (*len < *size)
    {
        (*recArr)[*len] = *newRecord;
        (*len)++;
    }
    else
    {
        *recArr = realloc(*recArr, (sizeof(Record) * (*size * 2)));
        *size *= 2;
        (*recArr)[*len] = *newRecord;
        (*len)++;
    }
}

int compare_records(const void *a, const void *b)
{
    Record arg1 = *(const Record *)a;
    Record arg2 = *(const Record *)b;
    if (arg1.id < arg2.id)
    {
        return -1;
    }
    if (arg1.id > arg2.id)
    {
        return 1;
    }
    return 0;
}
