/*
 * Topic   : realloc()
 * Module  : 11 - Dynamic Memory Allocation
 *
 * realloc(ptr, new_size) resizes a block (may move it to a new address).
 * Pass NULL as ptr to behave like malloc.
 *
 * Compile: gcc "03 realloc.c" -o mem03
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int *temp;
    int i;

    printf("=== realloc() ===\n\n");

    arr = malloc(3 * sizeof(int));
    if (arr == NULL)
        return 1;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    printf("Original size 3: ");
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    printf("\n");

    temp = realloc(arr, 5 * sizeof(int));
    if (temp == NULL)
    {
        free(arr);
        printf("realloc failed.\n");
        return 1;
    }
    arr = temp;

    arr[3] = 4;
    arr[4] = 5;

    printf("After realloc to size 5: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);

    return 0;
}
