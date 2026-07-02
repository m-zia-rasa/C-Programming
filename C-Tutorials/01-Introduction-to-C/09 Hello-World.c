/*
 * Topic   : Writing First Program — Hello, World!
 * Module  : 01 - Introduction to C
 *
 * This is the traditional first C program. Every line is explained below.
 *
 * Structure of a minimal C program:
 *   1. #include directives — pull in library declarations
 *   2. main() — entry point; OS calls this when the program starts
 *   3. Statements inside { } — executed in order
 *   4. return 0; — tells the OS the program finished successfully
 *
 * Compile: gcc "09 Hello-World.c" -o hello
 * Run    : ./hello  (Linux/macOS)  |  hello.exe  (Windows)
 */

#include <stdio.h> /* Standard I/O: printf, scanf, etc. */

/*
 * main: program entry point.
 * void means main takes no command-line arguments (simplified form).
 * int return type means we return an exit status to the operating system.
 */
int main(void)
{
    /* printf prints text to the console; \n starts a new line */
    printf("Hello, World!\n");

    printf("Welcome to C programming.\n");

    return 0; /* 0 conventionally means success */
}
