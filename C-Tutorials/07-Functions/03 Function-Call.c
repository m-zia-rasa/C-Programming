/*
 * Topic   : Function Call
 * Module  : 07 - Functions
 *
 * Calling a function runs its body. Use the name and arguments:
 *   result = function_name(arg1, arg2);
 *   function_name();           (no arguments if none required)
 *
 * Compile: gcc "03 Function-Call.c" -o fn03
 */

#include <stdio.h>

int multiply(int a, int b);
void show_header(const char *title);

int main(void)
{
    int product;

    show_header("Function Call");

    product = multiply(4, 5);
    printf("Called multiply(4, 5) => %d\n", product);

    multiply(2, 3); /* return value ignored */
    printf("Called multiply(2, 3) again (result not stored).\n");

    return 0;
}

void show_header(const char *title)
{
    printf("=== %s ===\n\n", title);
}

int multiply(int a, int b)
{
    return a * b;
}
