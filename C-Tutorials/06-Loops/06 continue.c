/*
 * Topic   : continue Statement
 * Module  : 06 - Loops
 *
 * continue skips the rest of the current iteration and jumps
 * to the next test/update of the loop.
 *
 * Compile: gcc "06 continue.c" -o loop06
 */

#include <stdio.h>

int main(void)
{
    int i;

    printf("=== continue Statement ===\n\n");
    printf("Print 1 to 15, but skip multiples of 3:\n\n");

    for (i = 1; i <= 15; i++)
    {
        if (i % 3 == 0)
            continue; /* skip printf for this value */

        printf("%d ", i);
    }

    printf("\n\nDemo: print 1 to 10 except 5 (like skipping one value):\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
