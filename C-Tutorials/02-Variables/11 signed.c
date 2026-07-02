/*
 * Topic   : Type Modifier — signed
 * Module  : 02 - Variables
 *
 * signed (default for char, short, int, long) allows positive and negative.
 * Explicit form: signed int x = -10;
 *
 * Compile: gcc "11 signed.c" -o var11
 */

#include <stdio.h>

int main(void)
{
    signed int balance = 100;
    signed int withdrawal = 150;
    signed int result = balance - withdrawal;

    printf("=== Type Modifier: signed ===\n\n");
    printf("balance    = %d\n", balance);
    printf("withdrawal = %d\n", withdrawal);
    printf("result     = %d (can be negative)\n", result);

    return 0;
}
