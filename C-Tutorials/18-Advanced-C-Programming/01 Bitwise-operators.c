/*
 * Topic   : Bitwise Operators (Advanced use)
 * Module  : 18 - Advanced C Programming
 *
 * Bit masks: set, clear, toggle, and test individual bits.
 * Useful in embedded systems, flags, and permissions.
 *
 * Compile: gcc "01 Bitwise-operators.c" -o adv01
 */

#include <stdio.h>

#define FLAG_READ  (1 << 0) /* 0001 */
#define FLAG_WRITE (1 << 1) /* 0010 */
#define FLAG_EXEC  (1 << 2) /* 0100 */

int main(void)
{
    unsigned int permissions = 0;

    printf("=== Bitwise Operators ===\n\n");

    permissions |= FLAG_READ;
    permissions |= FLAG_WRITE;
    printf("After set READ+WRITE: 0x%X\n", permissions);

    permissions &= ~FLAG_WRITE;
    printf("After clear WRITE:    0x%X\n", permissions);

    permissions ^= FLAG_EXEC;
    printf("After toggle EXEC:    0x%X\n", permissions);

    if (permissions & FLAG_READ)
        printf("READ flag is ON\n");

    return 0;
}
