/*
 * Topic   : Multi-dimensional Arrays
 * Module  : 08 - Arrays and Strings
 *
 * C supports 3D and higher dimensions:
 *   type name[d1][d2][d3];
 *
 * Useful for volumes, RGB cubes, or tables indexed by multiple keys.
 *
 * Compile: gcc "03 Multi-dimensional-arrays.c" -o arr03
 */

#include <stdio.h>

int main(void)
{
    /* 2 layers, 2 rows, 3 columns */
    int cube[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}}
    };
    int layer, row, col;
    int total = 0;

    printf("=== Multi-dimensional Arrays (3D) ===\n\n");

    for (layer = 0; layer < 2; layer++)
    {
        printf("Layer %d:\n", layer);
        for (row = 0; row < 2; row++)
        {
            for (col = 0; col < 3; col++)
            {
                printf("  cube[%d][%d][%d] = %2d\n",
                       layer, row, col, cube[layer][row][col]);
                total += cube[layer][row][col];
            }
        }
        printf("\n");
    }

    printf("Sum of all elements = %d\n", total);

    return 0;
}
