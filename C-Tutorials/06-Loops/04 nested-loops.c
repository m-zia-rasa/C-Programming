/*
 * Topic   : Nested Loops
 * Module  : 06 - Loops
 *
 * A loop inside another loop. Inner loop completes all iterations
 * for each step of the outer loop.
 *
 * Common use: tables, grids, patterns.
 *
 * Compile: gcc "04 nested-loops.c" -o loop04
 */

#include <stdio.h>

int main(void)
{
    int row;
    int col;
    int n = 5;

    printf("=== Nested Loops ===\n\n");
    printf("Multiplication table (1 to %d):\n\n", n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
            printf("%4d", row * col);
        printf("\n");
    }

    return 0;
}
