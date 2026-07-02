/*
 * Topic   : Macros
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * Function-like macros:
 *   #define SQUARE(x) ((x) * (x))
 *
 * Use parentheses around parameters and whole expression.
 *
 * Compile: gcc "03 Macros.c" -o pp03
 */

#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define TO_CELSIUS(f) (((f) - 32.0) * 5.0 / 9.0)

int main(void)
{
    int n = 5;

    printf("=== Macros ===\n\n");
    printf("SQUARE(%d) = %d\n", n, SQUARE(n));
    printf("SQUARE(%d+1) = %d\n", n, SQUARE(n + 1));
    printf("MAX(12, 9) = %d\n", MAX(12, 9));
    printf("TO_CELSIUS(98.6) = %.2f C\n", TO_CELSIUS(98.6));

    return 0;
}
