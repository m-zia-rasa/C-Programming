/*
 * Topic   : Increment / Decrement Operators
 * Module  : 04 - Operators
 *
 * Prefix:  ++x  --x   change first, then use the value
 * Postfix: x++  x--   use the value, then change
 *
 * Compile: gcc "05 Increment-Decrement.c" -o op05
 */

#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 5;

    printf("=== Increment / Decrement ===\n\n");

    printf("Starting: a = %d, b = %d\n\n", a, b);

    printf("Prefix  ++a : value used is %d, now a = %d\n", ++a, a);
    printf("Postfix b++ : value used is %d, now b = %d\n", b++, b);

    a = 10;
    b = 10;
    printf("\nReset: a = %d, b = %d\n", a, b);
    printf("Prefix  --a : value used is %d, now a = %d\n", --a, a);
    printf("Postfix b-- : value used is %d, now b = %d\n", b--, b);

    return 0;
}
