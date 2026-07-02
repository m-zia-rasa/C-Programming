/*
 * Topic   : Function Definition
 * Module  : 07 - Functions
 *
 * A definition is the full function: prototype + body in one place.
 *
 *   return_type name(parameters) {
 *       // statements
 *       return value;   (if not void)
 *   }
 *
 * Compile: gcc "02 Function-Definition.c" -o fn02
 */

#include <stdio.h>

int square(int n)
{
    return n * n;
}

void greet(void)
{
    printf("Hello from greet()!\n");
}

int main(void)
{
    int x = 6;

    printf("=== Function Definition ===\n\n");

    greet();
    printf("square(%d) = %d\n", x, square(x));

    return 0;
}
