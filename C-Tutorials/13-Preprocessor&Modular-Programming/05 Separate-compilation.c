/*
 * Topic   : Separate Compilation
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * Each .c file compiles to an object file (.o / .obj), then the linker
 * combines them into one executable.
 *
 * Steps (from this folder):
 *   gcc -c math_utils.c -o math_utils.o
 *   gcc -c "05 Separate-compilation.c" -o main.o
 *   gcc main.o math_utils.o -o pp05
 *
 * MSVC:
 *   cl /c math_utils.c
 *   cl /c "05 Separate-compilation.c"
 *   cl main.obj math_utils.obj /Fe:pp05.exe
 */

#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int a = 20;
    int b = 3;

    printf("=== Separate Compilation ===\n\n");
    printf("main.c was compiled separately from math_utils.c\n");
    printf("add(%d, %d) = %d\n", a, b, add(a, b));

    return 0;
}
