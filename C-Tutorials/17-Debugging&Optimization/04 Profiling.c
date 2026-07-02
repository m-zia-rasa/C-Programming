/*
 * Topic   : Profiling
 * Module  : 17 - Debugging and Optimization
 *
 * Profiling measures where a program spends time.
 *
 * Tools:
 *   Linux: perf, gprof
 *   GCC: gcc -pg ... then gprof
 *   MSVC: Visual Studio Performance Profiler
 *
 * This demo compares two approaches using clock().
 *
 * Compile: gcc -O0 "04 Profiling.c" -o dbg04
 */

#include <stdio.h>
#include <time.h>

#define N 200000

long sum_naive(void)
{
    long i, total = 0;
    for (i = 0; i < N; i++)
        total += i % 7;
    return total;
}

long sum_cached_mod(void)
{
    long i, total = 0;
    int mods[7];
    for (i = 0; i < 7; i++)
        mods[i] = (int)(i % 7);
    for (i = 0; i < N; i++)
        total += mods[i % 7];
    return total;
}

static double seconds(clock_t start, clock_t end)
{
    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main(void)
{
    clock_t t0, t1;
    long r1, r2;

    printf("=== Profiling ===\n\n");

    t0 = clock();
    r1 = sum_naive();
    t1 = clock();
    printf("Naive loop result=%ld, time=%.4f s\n", r1, seconds(t0, t1));

    t0 = clock();
    r2 = sum_cached_mod();
    t1 = clock();
    printf("Cached mod result=%ld, time=%.4f s\n", r2, seconds(t0, t1));

    printf("\nProfile before optimizing: measure, then improve hot paths.\n");

    return 0;
}
