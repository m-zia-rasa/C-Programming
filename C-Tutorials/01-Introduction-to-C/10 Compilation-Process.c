/*
 * Topic   : Compilation Process
 * Module  : 01 - Introduction to C
 *
 * Stages when you run: gcc program.c -o program
 *
 *   1. PREPROCESSING
 *      - Handles #include, #define, #ifdef
 *      - Produces expanded source (view with: gcc -E file.c)
 *
 *   2. COMPILATION
 *      - Translates C to assembly (view with: gcc -S file.c)
 *
 *   3. ASSEMBLY
 *      - Converts assembly to machine code object file (.o / .obj)
 *      - (gcc -c file.c stops after this stage)
 *
 *   4. LINKING
 *      - Combines your .o file with C library (printf, etc.)
 *      - Produces final executable
 *
 * Try these commands on THIS file (in terminal):
 *   gcc -E "10 Compilation-Process.c" -o lesson10.i
 *   gcc -S "10 Compilation-Process.c" -o lesson10.s
 *   gcc -c "10 Compilation-Process.c" -o lesson10.o
 *   gcc lesson10.o -o lesson10
 *
 * Compile normally: gcc "10 Compilation-Process.c" -o intro10
 */

#include <stdio.h>

#define COURSE_NAME "Introduction to C"
#define LESSON_NUMBER 10

int main(void)
{
    /* __DATE__ and __TIME__ are predefined macros filled in at compile time */
    printf("=== Compilation Process ===\n\n");

    printf("Course : %s\n", COURSE_NAME);
    printf("Lesson : %d\n", LESSON_NUMBER);
    printf("Built on: %s at %s\n\n", __DATE__, __TIME__);

    printf("The macro COURSE_NAME was substituted during preprocessing.\n");
    printf("The linker connected printf to the C standard library.\n");

    return 0;
}
