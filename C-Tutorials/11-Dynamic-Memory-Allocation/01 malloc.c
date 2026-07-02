/*
 * Topic   : malloc()
 * Module  : 11 - Dynamic Memory Allocation
 *
 * malloc(size) allocates raw bytes on the heap and returns a pointer,
 * or NULL if allocation fails. Memory is uninitialized.
 *
 *   int *arr = malloc(5 * sizeof(int));
 *
 * Always check for NULL and call free() when done.
 *
 * Compile: gcc "01 malloc.c" -o mem01
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int n = 5;
    int *arr;
    int i;

    printf("=== malloc() ===\n\n");

    arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL)
    {
        printf("malloc failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
        arr[i] = (i + 1) * 10;

    printf("Allocated %d integers on the heap:\n", n);
    for (i = 0; i < n; i++)
        printf("  arr[%d] = %d\n", i, arr[i]);

    free(arr);
    printf("\nMemory freed with free(arr).\n");

    return 0;
}
