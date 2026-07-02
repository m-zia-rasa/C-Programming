/*
 * Topic   : Pointers and Arrays
 * Module  : 09 - Pointers
 *
 * Array name often decays to a pointer to the first element.
 *   arr[i] is the same as *(arr + i)
 *
 * Compile: gcc "05 Pointers-and-Arrays.c" -o ptr05
 */

#include <stdio.h>

int main(void)
{
    int nums[] = {2, 4, 6, 8};
    int *p = nums;
    int i;

    printf("=== Pointers and Arrays ===\n\n");

    printf("Using index notation:\n");
    for (i = 0; i < 4; i++)
        printf("  nums[%d] = %d\n", i, nums[i]);

    printf("\nUsing pointer notation:\n");
    for (i = 0; i < 4; i++)
        printf("  *(nums + %d) = %d\n", i, *(nums + i));

    printf("\nWalking with pointer p:\n");
    while (p < nums + 4)
    {
        printf("  %d ", *p);
        p++;
    }
    printf("\n");

    return 0;
}
