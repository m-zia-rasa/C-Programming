/*
 * Topic   : What is C Language?
 * Module  : 01 - Introduction to C
 *
 * C is a general-purpose, procedural programming language created for
 * writing efficient system software. It is close to the hardware while
 * remaining portable across operating systems when you recompile.
 *
 * Characteristics:
 *   - Procedural (functions + structured control flow)
 *   - Compiled to native machine code (fast execution)
 *   - Small language core; rich standard library
 *   - Influenced C++, Java, C#, Go, and many others
 *
 * Compile: gcc "02 What-is-C-Language.c" -o intro02
 */

#include <stdio.h>

int main(void)
{
    printf("=== What is the C Language? ===\n\n");

    printf("C is a compiled, procedural language used for:\n");
    printf("  - Operating systems and device drivers\n");
    printf("  - Embedded systems and firmware\n");
    printf("  - High-performance libraries and applications\n\n");

    printf("A C program always starts execution at the main() function.\n");
    printf("This file is plain text with extension .c until you compile it.\n");

    return 0;
}
