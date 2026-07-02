/*
 * Topic   : Pointers to Functions
 * Module  : 09 - Pointers
 *
 * Functions have addresses too. A function pointer stores that address.
 *
 *   int (*operation)(int, int);
 *   operation = add;
 *   result = operation(3, 4);
 *
 * Compile: gcc "06 Pointers-to-Functions.c" -o ptr06
 */

#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);

int main(void)
{
    int (*func_ptr)(int, int);
    int x = 6;
    int y = 7;

    printf("=== Pointers to Functions ===\n\n");

    func_ptr = add;
    printf("add(%d, %d) = %d\n", x, y, func_ptr(x, y));

    func_ptr = multiply;
    printf("multiply(%d, %d) = %d\n", x, y, func_ptr(x, y));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}
