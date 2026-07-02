/*
 * Topic   : Function Pointers
 * Module  : 18 - Advanced C Programming
 *
 * Store and call functions indirectly:
 *   ReturnType (*name)(param types);
 *
 * Compile: gcc "06 Function-pointers.c" -o adv06
 */

#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int apply(int x, int y, int (*operation)(int, int))
{
    return operation(x, y);
}

int main(void)
{
    int (*op)(int, int) = add;

    printf("=== Function Pointers ===\n\n");
    printf("add(8, 3) = %d\n", op(8, 3));

    op = subtract;
    printf("subtract(8, 3) = %d\n", op(8, 3));

    printf("apply(10, 4, add) = %d\n", apply(10, 4, add));

    return 0;
}
