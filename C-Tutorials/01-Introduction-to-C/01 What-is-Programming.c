/*
 * Topic   : What is Programming?
 * Module  : 01 - Introduction to C
 *
 * Programming means giving a computer step-by-step instructions to solve
 * a problem. We write source code in a language (such as C); a compiler or
 * interpreter turns that text into something the machine can execute.
 *
 * Key ideas:
 *   - Algorithm  : a clear sequence of steps (logic)
 *   - Source code: human-readable instructions saved in .c files
 *   - Program    : source code after it is compiled/linked into an executable
 *   - Input/Output: data the program reads and results it produces
 *
 * Compile: gcc "01 What-is-Programming.c" -o intro01
 * Run    : ./intro01   (Linux/macOS)  |  intro01.exe  (Windows)
 */

#include <stdio.h>

int main(void)
{
    printf("=== What is Programming? ===\n\n");

    printf("Programming is the craft of writing instructions for a computer.\n");
    printf("Those instructions must be precise, ordered, and repeatable.\n\n");

    printf("Example algorithm (make tea):\n");
    printf("  1. Boil water\n");
    printf("  2. Pour water into cup\n");
    printf("  3. Add tea bag\n");
    printf("  4. Wait 3 minutes\n");
    printf("  5. Remove tea bag\n\n");

    /* A tiny program is still an algorithm expressed in code. */
    int cups_of_tea = 2;
    printf("This program encodes step 2 as data: cups to prepare = %d\n", cups_of_tea);

    return 0;
}
