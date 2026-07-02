/*
 * Topic   : Arithmetic Operators
 * Module  : 04 - Operators
 *
 * Arithmetic operators work on numeric types:
 *   +  addition       -  subtraction
 *   *  multiplication /  division
 *   %  modulus (remainder of integer division)
 *
 * Integer division truncates: 7 / 2 == 3
 * Use float/double for fractional results: 7.0 / 2.0 == 3.5
 *
 * Compile: gcc "01 Arithmetic.c" -o op01
 */

#include <stdio.h>

int main(void)
{
    int a = 17;
    int b = 5;
    float x = 17.0f;
    float y = 5.0f;

    printf("=== Arithmetic Operators ===\n\n");
    printf("int  a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d   (integer division)\n", a / b);
    printf("a %% b = %d   (remainder)\n", a % b);

    printf("\nfloat division:\n");
    printf("x / y = %.2f\n", x / y);

    return 0;
}
