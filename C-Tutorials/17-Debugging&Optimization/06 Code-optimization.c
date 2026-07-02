/*
 * Topic   : Code Optimization
 * Module  : 17 - Debugging and Optimization
 *
 * Optimization guidelines:
 *   1. Make it correct first
 *   2. Measure with a profiler
 *   3. Improve hot paths (algorithm > micro-optimizations)
 *   4. Use compiler flags: -O2, -O3
 *
 * Compare O0 vs O2 when compiling this file.
 *
 * Compile:
 *   gcc -O0 "06 Code-optimization.c" -o dbg06_slow
 *   gcc -O2 "06 Code-optimization.c" -o dbg06_fast
 */

#include <stdio.h>
#include <time.h>

#define LIMIT 10000000

int count_divisible_naive(int n, int d)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
        if (i % d == 0)
            count++;
    return count;
}

int count_divisible_fast(int n, int d)
{
    /* every d-th number is divisible by d */
    return (n - 1) / d + 1;
}

static double elapsed(clock_t a, clock_t b)
{
    return (double)(b - a) / CLOCKS_PER_SEC;
}

int main(void)
{
    clock_t t0, t1;
    int c1, c2;

    printf("=== Code Optimization ===\n\n");

    t0 = clock();
    c1 = count_divisible_naive(LIMIT, 7);
    t1 = clock();
    printf("Naive loop: count=%d, time=%.4f s\n", c1, elapsed(t0, t1));

    t0 = clock();
    c2 = count_divisible_fast(LIMIT, 7);
    t1 = clock();
    printf("Math formula: count=%d, time=%.6f s\n", c2, elapsed(t0, t1));

    printf("\nBetter algorithm often beats micro-tuning loops.\n");

    return 0;
}
