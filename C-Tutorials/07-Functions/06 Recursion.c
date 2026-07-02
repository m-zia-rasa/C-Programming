/*
 * Topic   : Recursion
 * Module  : 07 - Functions
 *
 * A function calls itself. Every recursive function needs:
 *   1. Base case    — stops recursion
 *   2. Recursive step — smaller subproblem
 *
 * Compile: gcc "06 Recursion.c" -o fn06
 */

#include <stdio.h>

unsigned long factorial(unsigned int n);
int sum_up_to(int n);

int main(void)
{
    printf("=== Recursion ===\n\n");

    printf("factorial(5) = %lu\n", factorial(5));
    printf("sum_up_to(10) = %d\n", sum_up_to(10));

    return 0;
}

unsigned long factorial(unsigned int n)
{
    if (n <= 1)
        return 1; /* base case */
    return n * factorial(n - 1);
}

int sum_up_to(int n)
{
    if (n <= 0)
        return 0;
    return n + sum_up_to(n - 1);
}
