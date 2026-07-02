/*
 * Topic   : Pointer Arithmetic
 * Module  : 09 - Pointers
 *
 * Adding 1 to a pointer moves to the next element of its type:
 *   p + 1 points to the next int (not the next byte unless type is char)
 *
 * Valid on array elements: p++, p + n, p - q
 *
 * Compile: gcc "04 Pointer-Arithmetic.c" -o ptr04
 */

#include <stdio.h>

int main(void)
{
    int data[] = {10, 20, 30, 40, 50};
    int *p = data; /* points to data[0] */
    int i;

    printf("=== Pointer Arithmetic ===\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("*(p + %d) = %d  (address %p)\n", i, *(p + i), (void *)(p + i));
    }

    p++; /* move to data[1] */
    printf("\nAfter p++: *p = %d\n", *p);

    return 0;
}
