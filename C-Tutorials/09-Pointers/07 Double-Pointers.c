/*
 * Topic   : Double Pointers
 * Module  : 09 - Pointers
 *
 * A pointer to a pointer (int **pp) stores the address of a pointer.
 * Used for dynamic 2D structures, modifying pointers in functions, etc.
 *
 * Compile: gcc "07 Double-Pointers.c" -o ptr07
 */

#include <stdio.h>

void set_to_null(int **pp)
{
    *pp = NULL; /* changes the caller's pointer variable */
}

int main(void)
{
    int value = 42;
    int *p = &value;
    int **pp = &p;

    printf("=== Double Pointers ===\n\n");

    printf("value = %d\n", value);
    printf("p points to %d (address %p)\n", *p, (void *)p);
    printf("pp points to p; **pp = %d\n", **pp);

    **pp = 99;
    printf("After **pp = 99: value = %d\n", value);

    set_to_null(&p);
    if (p == NULL)
        printf("p was set to NULL through double pointer.\n");

    return 0;
}
