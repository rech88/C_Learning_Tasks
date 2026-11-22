#pragma once

/**
 * Имя name - строка до 16 символов
 * Возраст age - число
 */
typedef struct Label_s {
char name [16];
int age;
} Label;

/**
 * В структуре содержится статистика по именам:
 * cntTotal - сколько всего дано имен,
 * cntLong - имена длинной больше 10
 */
typedef struct NameStats_s {
int cntTotal;
int cntLong;
} NameStats;

/**
 * В структуре содержится статистика по возрасту:
 * @cntTotal - сколько всего дано возрастов,
 * @cntAdult - количество возрастов >= 18
 * @cntKids - количество возрастов < 14
 */
typedef struct AgeStats_s {
int cntTotal;
int cntAdults;
int cntKids;
} AgeStats;

/**
 * Добавляет в статистики oNames (NameStats) и oAges (AgeStats) информацию о записи person  
 */
void calcStats (const Label *person, NameStats *oNames, AgeStats *oAges);

/**
 * Выводит общую статистику из nameStats и ageStats
 */
void printStats(NameStats* nameStats, AgeStats *ageStats);

