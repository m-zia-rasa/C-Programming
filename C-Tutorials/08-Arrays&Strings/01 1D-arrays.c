/*
 * Topic   : 1D Arrays
 * Module  : 08 - Arrays and Strings
 *
 * A one-dimensional array stores many values of the same type.
 * Index starts at 0. Size is fixed at declaration.
 *
 *   type name[size];
 *   name[0] = 10;
 *
 * Compile: gcc "01 1D-arrays.c" -o arr01
 */

#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;
    int sum = 0;

    printf("=== 1D Arrays ===\n\n");

    printf("Elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("  numbers[%d] = %d\n", i, numbers[i]);
        sum += numbers[i];
    }

    printf("\nSum = %d\n", sum);
    printf("sizeof(numbers) = %zu bytes\n", sizeof numbers);

    return 0;
}
