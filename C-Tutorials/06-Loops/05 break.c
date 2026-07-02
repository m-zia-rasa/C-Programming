/*
 * Topic   : break Statement
 * Module  : 06 - Loops
 *
 * break exits the innermost loop (or switch) immediately.
 * Use when you found what you need and want to stop iterating.
 *
 * Compile: gcc "05 break.c" -o loop05
 */

#include <stdio.h>

int main(void)
{
    int i;
    int target = 7;
    int found = 0;

    printf("=== break Statement ===\n\n");
    printf("Search for first multiple of %d between 1 and 20:\n\n", target);

    for (i = 1; i <= 20; i++)
    {
        if (i % target == 0)
        {
            found = i;
            break; /* stop the loop early */
        }
    }

    if (found)
        printf("Found %d — loop stopped.\n", found);
    else
        printf("No multiple found in range.\n");

    return 0;
}
