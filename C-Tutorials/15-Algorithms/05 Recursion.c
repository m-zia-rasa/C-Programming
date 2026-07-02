/*
 * Topic   : Recursion (Algorithms)
 * Module  : 15 - Algorithms
 *
 * A function solves a problem by calling itself on smaller subproblems.
 * Essential parts: base case + recursive case.
 *
 * Compile: gcc "05 Recursion.c" -o algo05
 */

#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum_array(const int *arr, int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sum_array(arr, n - 1);
}

int main(void)
{
    int values[] = {1, 2, 3, 4, 5};

    printf("=== Recursion ===\n\n");
    printf("factorial(5) = %d\n", factorial(5));
    printf("fibonacci(7) = %d\n", fibonacci(7));
    printf("sum_array of 1..5 = %d\n", sum_array(values, 5));

    return 0;
}
