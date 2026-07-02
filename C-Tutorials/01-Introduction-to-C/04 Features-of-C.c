/*
 * Topic   : Features of C
 * Module  : 01 - Introduction to C
 *
 * Major features demonstrated or summarized here:
 *   - Structured programming (if, for, while, functions)
 *   - Rich set of operators and bitwise operations
 *   - Pointers and direct memory access
 *   - Modularity via functions and header files
 *   - Portability (recompile on another platform)
 *   - Efficiency close to assembly when needed
 *
 * Compile: gcc "04 Features-of-C.c" -o intro04
 */

#include <stdio.h>

/* Function prototype: modular design */
int add(int a, int b);

int main(void)
{
    int x = 10;
    int y = 3;
    int *ptr = &x; /* pointers: store address of a variable */

    printf("=== Features of C ===\n\n");

    printf("1. Structured control flow (if/else):\n");
    if (y != 0)
        printf("   x / y = %d\n", x / y);
    else
        printf("   division by zero avoided\n");

    printf("\n2. Functions and reuse: add(%d, %d) = %d\n", x, y, add(x, y));

    printf("\n3. Pointers: value at address ptr = %d\n", *ptr);

    printf("\n4. Bitwise operators: x & y = %d, x | y = %d\n", x & y, x | y);

    printf("\n5. Portability: same source compiles on Windows, Linux, macOS.\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
