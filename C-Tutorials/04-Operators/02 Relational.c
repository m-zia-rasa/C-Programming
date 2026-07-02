/*
 * Topic   : Relational Operators
 * Module  : 04 - Operators
 *
 * Relational operators compare two values and yield:
 *   1 (true) or 0 (false) in C
 *
 *   ==  equal to        !=  not equal
 *   <   less than       >   greater than
 *   <=  less or equal   >=  greater or equal
 *
 * Compile: gcc "02 Relational.c" -o op02
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    printf("=== Relational Operators ===\n\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a <  b : %d\n", a < b);
    printf("a >  b : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);

    printf("\nIn C, 1 means true and 0 means false.\n");

    return 0;
}
