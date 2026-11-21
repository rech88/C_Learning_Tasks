#include <stdio.h>
#include <stdlib.h>

#include "records.h"

int main() {
    Record* recordsArr = (Record*)malloc(sizeof(Record)*3);
    
    int size = 3;
    int len = 0;

    int n;
    scanf("%d", &n);

    Record newRecord;
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &newRecord.id, newRecord.value);
        addRecord(&recordsArr, &newRecord, &size, &len);
    }
    
    qsort(recordsArr, len, sizeof(Record), compare_records);
    for (int i = 0; i < len; i++) {
        printf("%d %s\n", recordsArr[i].id, recordsArr[i].value);
    }
}
