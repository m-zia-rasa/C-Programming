/*
 * Topic   : Conditional (Ternary) Operator
 * Module  : 04 - Operators
 *
 * Syntax:  condition ? value_if_true : value_if_false
 *
 * Compact alternative to a simple if/else expression.
 *
 * Compile: gcc "07 Conditional-Ternary.c" -o op07
 */

#include <stdio.h>

int main(void)
{
    int a = 15;
    int b = 22;
    int max;
    int age = 17;
    const char *status;

    max = (a > b) ? a : b;
    status = (age >= 18) ? "adult" : "minor";

    printf("=== Conditional (Ternary) Operator ===\n\n");
    printf("a = %d, b = %d\n", a, b);
    printf("max = (a > b) ? a : b  =>  %d\n\n", max);

    printf("age = %d\n", age);
    printf("status = (age >= 18) ? \"adult\" : \"minor\"  =>  %s\n", status);

    printf("\nNested example (use sparingly for readability):\n");
    printf("grade = %c\n", (max >= 20) ? 'A' : (max >= 10) ? 'B' : 'C');

    return 0;
}
