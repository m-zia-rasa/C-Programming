/*
 * Topic   : if-else Statement
 * Module  : 05 - Conditional Statements
 *
 * Syntax:
 *   if (condition) {
 *       // true branch
 *   } else {
 *       // false branch
 *   }
 *
 * Exactly one branch runs.
 *
 * Compile: gcc "02 if-else.c" -o cond02
 */

#include <stdio.h>

int main(void)
{
    int marks = 45;
    const char *result;

    printf("=== if-else Statement ===\n\n");
    printf("Marks: %d\n", marks);

    if (marks >= 50)
        result = "Pass";
    else
        result = "Fail";

    printf("Result: %s\n", result);

    return 0;
}
