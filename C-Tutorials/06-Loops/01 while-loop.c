/*
 * Topic   : while Loop
 * Module  : 06 - Loops
 *
 * Syntax:
 *   while (condition) {
 *       // body — runs while condition is true
 *   }
 *
 * Check condition before each iteration (may run zero times).
 *
 * Compile: gcc "01 while-loop.c" -o loop01
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int count = 1;
    int sum = 0;

    printf("=== while Loop ===\n\n");

    printf("Count from 1 to %d:\n", n);
    while (count <= n)
    {
        printf("  %d\n", count);
        sum += count;
        count++;
    }

    printf("Sum of 1 to %d = %d\n", n, sum);

    return 0;
}
