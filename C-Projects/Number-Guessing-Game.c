/*
 * Project : Number Guessing Game
 * Level   : Beginner
 *
 * Demonstrates random numbers, loops, conditionals, and simple game state.
 *
 * Build:
 *   cl /W4 /Fe:guess.exe Number-Guessing-Game.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int read_guess(int *guess)
{
    char line[100];

    printf("Enter your guess: ");
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 0;
    }

    return sscanf(line, "%d", guess) == 1;
}

int main(void)
{
    int secret;
    int guess;
    int attempts;
    const int max_attempts = 7;

    srand((unsigned int)time(NULL));
    secret = (rand() % 100) + 1;

    printf("I picked a number from 1 to 100. You have %d attempts.\n", max_attempts);

    for (attempts = 1; attempts <= max_attempts; attempts++) {
        if (!read_guess(&guess)) {
            printf("Invalid input. Please enter a whole number.\n");
            return 1;
        }

        if (guess == secret) {
            printf("Correct! You guessed it in %d attempt(s).\n", attempts);
            return 0;
        }

        printf("%s\n", guess < secret ? "Too low." : "Too high.");
    }

    printf("Out of attempts. The number was %d.\n", secret);
    return 0;
}
