/*
 * Topic   : do-while Loop
 * Module  : 06 - Loops
 *
 * Syntax:
 *   do {
 *       // body — always runs at least once
 *   } while (condition);
 *
 * Condition is checked after each iteration.
 *
 * Compile: gcc "02 do-while-loop.c" -o loop02
 */

#include <stdio.h>

int main(void)
{
    int number = 0;
    int attempts = 0;

    printf("=== do-while Loop ===\n\n");
    printf("Simulating dice rolls until we get 6 (fixed sequence demo).\n\n");

    /* Demo: predetermined "rolls" — in real programs you might use rand() */
    int rolls[] = {2, 4, 3, 6};
    int total_rolls = (int)(sizeof rolls / sizeof rolls[0]);
    int index = 0;

    do
    {
        number = rolls[index++];
        attempts++;
        printf("Attempt %d: rolled %d\n", attempts, number);
    } while (number != 6 && index < total_rolls);

    printf("\nFinished after %d attempt(s).\n", attempts);

    return 0;
}
