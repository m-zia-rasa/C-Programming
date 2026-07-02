/*
 * Topic   : Big O Notation
 * Module  : 15 - Algorithms
 *
 * Big O gives an upper bound on growth (worst-case trend).
 * Common classes:
 *   O(1)        constant
 *   O(log n)    logarithmic (binary search)
 *   O(n)        linear
 *   O(n log n)  efficient sorts (merge sort)
 *   O(n^2)      quadratic (bubble sort)
 *
 * Compile: gcc "02 Big-O-Notation.c" -o algo02
 */

#include <stdio.h>

static int o1_access(const int *arr, int index)
{
    (void)arr;
    return index; /* one step */
}

static int o_n_sum(const int *arr, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

static int o_log_n_steps(int n)
{
    int steps = 0;
    while (n > 1)
    {
        n /= 2;
        steps++;
    }
    return steps;
}

static int o_n_squared_pairs(int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            count++;
    return count;
}

int main(void)
{
    int data[] = {3, 1, 4, 1, 5};
    int n = 5;

    printf("=== Big O Notation ===\n\n");

    printf("O(1)       example steps: %d\n", o1_access(data, 2));
    printf("O(n)       example steps: %d additions for n=%d\n", o_n_sum(data, n), n);
    printf("O(log n)   halving n=%d took %d steps\n", 32, o_log_n_steps(32));
    printf("O(n^2)     pair count for n=%d is %d\n", n, o_n_squared_pairs(n));

    return 0;
}
