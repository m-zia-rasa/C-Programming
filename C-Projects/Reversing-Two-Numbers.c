/*
 * Project : Reverse a Number
 * Level   : Beginner
 *
 * Demonstrates:
 *   - integer division and modulo
 *   - loop-based digit processing
 *   - preserving the sign of a negative number
 *
 * Build:
 *   cl /W4 /Fe:reverse.exe Reversing-Two-Numbers.c
 */

#include <stdio.h>

static int reverse_number(int value)
{
    int reversed = 0;
    int sign = 1;

    if (value < 0) {
        sign = -1;
        value = -value;
    }

    do {
        int digit = value % 10;
        reversed = (reversed * 10) + digit;
        value /= 10;
    } while (value > 0);

    return reversed * sign;
}

int main(void)
{
    char line[100];
    int number;

    printf("Enter an integer to reverse: ");
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &number) != 1) {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
    }

    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", reverse_number(number));

    return 0;
}
