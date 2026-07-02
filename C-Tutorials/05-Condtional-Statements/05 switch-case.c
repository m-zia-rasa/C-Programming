/*
 * Topic   : switch-case Statement
 * Module  : 05 - Conditional Statements
 *
 * Compare one integer-like expression against many constants:
 *   switch (expression) {
 *       case value1: statements; break;
 *       case value2: statements; break;
 *       default: statements;
 *   }
 *
 * break prevents fall-through to the next case.
 *
 * Compile: gcc "05 switch-case.c" -o cond05
 */

#include <stdio.h>

int main(void)
{
    int day = 3;

    printf("=== switch-case Statement ===\n\n");
    printf("day number = %d\n\n", day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
    case 7:
        printf("Weekend\n");
        break;
    default:
        printf("Invalid day. Use 1 to 7.\n");
        break;
    }

    return 0;
}
