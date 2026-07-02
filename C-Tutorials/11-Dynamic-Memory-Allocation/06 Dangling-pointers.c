/*
 * Topic   : Dangling Pointers
 * Module  : 11 - Dynamic Memory Allocation
 *
 * A dangling pointer points to memory that was freed (or went out of scope).
 * Using *ptr after free is undefined behavior — crashes or wrong data.
 *
 * Safe habit: free(ptr); ptr = NULL;
 *
 * Compile: gcc "06 Dangling-pointers.c" -o mem06
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;

    printf("=== Dangling Pointers ===\n\n");

    ptr = malloc(sizeof(int));
    if (ptr == NULL)
        return 1;

    *ptr = 500;
    printf("Valid use: *ptr = %d\n", *ptr);

    free(ptr);
    printf("Memory freed.\n");

    /* DANGEROUS — do not do this in real code:
     * printf("%d\n", *ptr);
     * The address may be reused for something else.
     */

    ptr = NULL;
    printf("Pointer set to NULL — no longer dangling.\n");

    if (ptr == NULL)
        printf("Safe check: ptr is NULL, we will not dereference it.\n");

    return 0;
}
