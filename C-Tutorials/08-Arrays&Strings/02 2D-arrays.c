/*
 * Topic   : 2D Arrays
 * Module  : 08 - Arrays and Strings
 *
 * A 2D array is a matrix: rows and columns.
 *   int matrix[rows][cols];
 *   matrix[i][j] accesses row i, column j.
 *
 * Compile: gcc "02 2D-arrays.c" -o arr02
 */

#include <stdio.h>

int main(void)
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i, j;
    int row_sum;

    printf("=== 2D Arrays ===\n\n");

    for (i = 0; i < 3; i++)
    {
        row_sum = 0;
        printf("Row %d: ", i);
        for (j = 0; j < 4; j++)
        {
            printf("%3d ", matrix[i][j]);
            row_sum += matrix[i][j];
        }
        printf(" | row sum = %d\n", row_sum);
    }

    return 0;
}
