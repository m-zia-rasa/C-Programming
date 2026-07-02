/*
 * Topic   : Constants — const keyword
 * Module  : 02 - Variables
 *
 * const tells the compiler a variable must not be changed after initialization.
 * Attempting assignment to a const variable is a compile-time error.
 *
 * Compile: gcc "13 const-keyword.c" -o var13
 */

#include <stdio.h>

int main(void)
{
    const int MAX_STUDENTS = 40;
    const float PI = 3.14159f;
    const char GRADE_PASS = 'P';

    printf("=== Constants: const keyword ===\n\n");
    printf("MAX_STUDENTS = %d\n", MAX_STUDENTS);
    printf("PI           = %.5f\n", PI);
    printf("GRADE_PASS   = %c\n", GRADE_PASS);

    /* Uncommenting the next line causes a compiler error:
     * MAX_STUDENTS = 50;
     */

    return 0;
}
