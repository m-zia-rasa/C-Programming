/*
 * Topic   : calloc()
 * Module  : 11 - Dynamic Memory Allocation
 *
 * calloc(count, size) allocates memory and sets all bytes to zero.
 * Returns NULL on failure.
 *
 *   int *arr = calloc(5, sizeof(int));  (all elements start as 0)
 *
 * Compile: gcc "02 calloc.c" -o mem02
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int n = 5;
    int *arr;
    int i;

    printf("=== calloc() ===\n\n");

    arr = calloc((size_t)n, sizeof(int));
    if (arr == NULL)
    {
        printf("calloc failed.\n");
        return 1;
    }

    printf("After calloc (zeroed):\n");
    for (i = 0; i < n; i++)
        printf("  arr[%d] = %d\n", i, arr[i]);

    arr[0] = 100;
    arr[4] = 400;
    printf("\nAfter assigning first and last:\n");
    printf("  arr[0] = %d, arr[4] = %d\n", arr[0], arr[4]);

    free(arr);

    return 0;
}
