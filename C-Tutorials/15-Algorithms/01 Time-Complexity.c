/*
 * Topic   : Time Complexity
 * Module  : 15 - Algorithms
 *
 * Time complexity describes how runtime grows as input size n grows.
 * We count dominant operations rather than exact seconds (machine-dependent).
 *
 * Compile: gcc "01 Time-Complexity.c" -o algo01
 */

#include <stdio.h>

int main(void)
{
    const int n = 8;
    int i, j;
    int ops_constant = 0;
    int ops_linear = 0;
    int ops_quadratic = 0;

    printf("=== Time Complexity ===\n\n");
    printf("Input size n = %d\n\n", n);

    ops_constant = 1;
    printf("Constant work: %d operation (does not depend on n)\n", ops_constant);

    for (i = 0; i < n; i++)
        ops_linear++;
    printf("Single loop to n: %d operations (grows linearly)\n", ops_linear);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            ops_quadratic++;
    printf("Nested loop n x n: %d operations (grows quadratically)\n", ops_quadratic);

    printf("\nAs n increases, nested loops dominate runtime fastest.\n");

    return 0;
}
