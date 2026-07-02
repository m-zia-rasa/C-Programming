/*
 * Project : Swap Two Numbers
 * Level   : Beginner
 *
 * Demonstrates:
 *   - reading integer input safely
 *   - using a temporary variable
 *   - printing multiple values correctly
 *
 * Build:
 *   cl /W4 /Fe:swap.exe Swap-Two-Numbers.c
 */

#include <stdio.h>

static int read_int(const char *prompt, int *value)
{
    char line[100];

    printf("%s", prompt);
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 0;
    }

    return sscanf(line, "%d", value) == 1;
}

int main(void)
{
    int first;
    int second;
    int temporary;

    if (!read_int("Enter the first number : ", &first) ||
        !read_int("Enter the second number: ", &second)) {
        printf("Invalid input. Please enter whole numbers.\n");
        return 1;
    }

    printf("\nBefore swap: first = %d, second = %d\n", first, second);

    temporary = first;
    first = second;
    second = temporary;

    printf("After swap : first = %d, second = %d\n", first, second);

    return 0;
}
