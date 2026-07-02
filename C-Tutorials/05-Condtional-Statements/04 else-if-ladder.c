/*
 * Topic   : else-if Ladder
 * Module  : 05 - Conditional Statements
 *
 * Chain multiple conditions:
 *   if (cond1) { ... }
 *   else if (cond2) { ... }
 *   else if (cond3) { ... }
 *   else { ... }
 *
 * Only the first true block executes.
 *
 * Compile: gcc "04 else-if-ladder.c" -o cond04
 */

#include <stdio.h>

int main(void)
{
    int score = 78;
    char grade;

    printf("=== else-if Ladder ===\n\n");
    printf("Score: %d\n", score);

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}
