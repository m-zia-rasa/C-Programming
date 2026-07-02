/*
 * Topic   : Function Declaration
 * Module  : 07 - Functions
 *
 * A declaration (prototype) tells the compiler a function exists:
 *   return_type name(parameter_types);
 *
 * Declarations usually appear before main() so the compiler knows
 * about functions defined later in the file.
 *
 * Compile: gcc "01 Function-Declaration.c" -o fn01
 */

#include <stdio.h>

/* --- Declarations (prototypes) --- */
int add(int a, int b);
void print_line(void);

int main(void)
{
    printf("=== Function Declaration ===\n\n");
    printf("Prototypes above main let us call functions defined below.\n\n");

    print_line();
    printf("add(7, 3) = %d  (defined below main; declared above)\n", add(7, 3));
    print_line();

    return 0;
}

/* Definition comes later — declaration made this legal */
void print_line(void)
{
    printf("------------------------\n");
}

int add(int a, int b)
{
    return a + b;
}
