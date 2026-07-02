/*
 * Topic   : for Loop
 * Module  : 06 - Loops
 *
 * Syntax:
 *   for (initialization; condition; update) {
 *       // body
 *   }
 *
 * All three parts are optional, but the usual form is shown below.
 *
 * Compile: gcc "03 for-loop.c" -o loop03
 */

#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    printf("=== for Loop ===\n\n");

    printf("Print 1 to 10:\n");
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n\n");

    printf("Sum of 1 to 10:\n");
    for (i = 1; i <= 10; i++)
        sum += i;
    printf("sum = %d\n", sum);

    return 0;
}
