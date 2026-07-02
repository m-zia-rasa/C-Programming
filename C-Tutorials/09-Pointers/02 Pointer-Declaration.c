/*
 * Topic   : Pointer Declaration
 * Module  : 09 - Pointers
 *
 * A pointer holds a memory address. Declare with * after the type:
 *   int *ptr;        pointer to int
 *   char *name;      pointer to char
 *   double *dp;      pointer to double
 *
 * Initialize with NULL or the address of a variable: ptr = &x;
 *
 * Compile: gcc "02 Pointer-Declaration.c" -o ptr02
 */

#include <stdio.h>

int main(void)
{
    int value = 100;
    int *ptr = NULL; /* safe initial value when no target yet */

    printf("=== Pointer Declaration ===\n\n");

    printf("value = %d at %p\n", value, (void *)&value);

    ptr = &value; /* ptr now stores address of value */
    printf("ptr holds address %p\n", (void *)ptr);
    printf("value via *ptr = %d\n", *ptr);

    return 0;
}
