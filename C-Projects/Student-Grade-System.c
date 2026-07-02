/*
 * Project : Student Grade System
 * Level   : Beginner
 *
 * Demonstrates arrays, averages, and grade classification.
 *
 * Build:
 *   cl /W4 /Fe:grades.exe Student-Grade-System.c
 */

#include <stdio.h>

#define SUBJECT_COUNT 5

static char grade_from_average(double average)
{
    if (average >= 90.0) {
        return 'A';
    }
    if (average >= 80.0) {
        return 'B';
    }
    if (average >= 70.0) {
        return 'C';
    }
    if (average >= 60.0) {
        return 'D';
    }
    return 'F';
}

int main(void)
{
    int marks[SUBJECT_COUNT];
    int total = 0;
    int i;
    char line[100];
    double average;

    for (i = 0; i < SUBJECT_COUNT; i++) {
        printf("Enter mark %d (0-100): ", i + 1);
        if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &marks[i]) != 1 ||
            marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark. Use a value from 0 to 100.\n");
            return 1;
        }
        total += marks[i];
    }

    average = (double)total / SUBJECT_COUNT;

    printf("\nTotal  : %d/%d\n", total, SUBJECT_COUNT * 100);
    printf("Average: %.2f\n", average);
    printf("Grade  : %c\n", grade_from_average(average));

    return 0;
}
