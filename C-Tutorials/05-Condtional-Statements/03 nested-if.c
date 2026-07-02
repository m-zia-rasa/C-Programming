/*
 * Topic   : Nested if
 * Module  : 05 - Conditional Statements
 *
 * An if (or if-else) placed inside another if block.
 * Useful when a decision depends on multiple levels of conditions.
 *
 * Compile: gcc "03 nested-if.c" -o cond03
 */

#include <stdio.h>

int main(void)
{
    int age = 20;
    int has_id = 1;

    printf("=== Nested if ===\n\n");
    printf("age = %d, has_id = %d\n\n", age, has_id);

    if (age >= 18)
    {
        printf("Age check passed.\n");
        if (has_id)
            printf("ID verified. Entry allowed.\n");
        else
            printf("ID required. Entry denied.\n");
    }
    else
    {
        printf("Under 18. Entry denied.\n");
    }

    return 0;
}
