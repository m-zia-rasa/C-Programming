/*
 * Topic   : Data Type — int
 * Module  : 02 - Variables
 *
 * int stores whole numbers (typically 32 bits on modern systems).
 * Range depends on platform; use <limits.h> constants for exact limits.
 *
 * Compile: gcc "04 int.c" -o var04
 */

#include <limits.h>
#include <stdio.h>

int main(void)
{
    int positive = 42;
    int negative = -17;
    int sum = positive + negative;

    printf("=== Data Type: int ===\n\n");
    printf("positive = %d\n", positive);
    printf("negative = %d\n", negative);
    printf("sum      = %d\n", sum);
    printf("\nTypical range on this system:\n");
    printf("  INT_MIN = %d\n", INT_MIN);
    printf("  INT_MAX = %d\n", INT_MAX);
    printf("  sizeof(int) = %zu byte(s)\n", sizeof(int));

    return 0;
}
