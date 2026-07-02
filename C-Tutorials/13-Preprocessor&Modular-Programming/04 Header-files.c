/*
 * Topic   : Header Files
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * Headers (.h) hold declarations and macros; source (.c) holds definitions.
 * Include guard (#ifndef) prevents double inclusion.
 *
 * Compile:
 *   gcc -c math_utils.c -o math_utils.o
 *   gcc "04 Header-files.c" math_utils.o -o pp04
 * Or: gcc "04 Header-files.c" math_utils.c -o pp04
 */

#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    printf("=== Header Files ===\n\n");
    printf("math_utils version macro: %d\n", MATH_UTILS_VERSION);
    printf("add(10, 5) = %d\n", add(10, 5));
    printf("multiply(6, 7) = %d\n", multiply(6, 7));

    return 0;
}
