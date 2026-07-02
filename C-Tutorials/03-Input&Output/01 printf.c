/*
 * Topic   : printf()
 * Module  : 03 - Input and Output
 *
 * printf() prints formatted text to the standard output (console).
 * It lives in <stdio.h> and returns the number of characters printed.
 *
 * Syntax: printf("format string", optional arguments...);
 *
 * Compile: gcc "01 printf.c" -o io01
 */

#include <stdio.h>

int main(void)
{
    char name[] = "Sara";
    int age = 20;
    float gpa = 3.75f;

    printf("=== printf() ===\n\n");

    /* Plain text */
    printf("Hello, World!\n");

    /* Format placeholders match extra arguments */
    printf("Name: %s, Age: %d, GPA: %.2f\n", name, age, gpa);

    /* Expressions and multiple prints */
    printf("Next year you will be %d years old.\n", age + 1);

    /* Return value (often ignored in beginners' programs) */
    {
        int chars_written = printf("This line has a counted length.\n");
        printf("printf returned %d characters (approximate).\n", chars_written);
    }

    return 0;
}
