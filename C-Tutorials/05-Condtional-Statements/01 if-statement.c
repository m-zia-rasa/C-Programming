/*
 * Topic   : if Statement
 * Module  : 05 - Conditional Statements
 *
 * Syntax:
 *   if (condition) {
 *       // runs only when condition is true (non-zero)
 *   }
 *
 * The condition is usually a relational or logical expression.
 *
 * Compile: gcc "01 if-statement.c" -o cond01
 */

#include <stdio.h>

int main(void)
{
    int temperature = 38;

    printf("=== if Statement ===\n\n");
    printf("Temperature: %d C\n", temperature);

    if (temperature > 37)
        printf("Warning: fever detected. Rest and drink water.\n");

    if (temperature >= 35 && temperature <= 37)
        printf("Temperature is in normal range.\n");

    return 0;
}
