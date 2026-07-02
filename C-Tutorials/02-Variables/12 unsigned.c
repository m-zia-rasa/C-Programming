/*
 * Topic   : Type Modifier — unsigned
 * Module  : 02 - Variables
 *
 * unsigned stores only zero and positive values — no sign bit for negatives.
 * Useful for counts, sizes, and bit patterns that must not be negative.
 *
 * Compile: gcc "12 unsigned.c" -o var12
 */

#include <limits.h>
#include <stdio.h>

int main(void)
{
    unsigned int age = 25u;
    unsigned int packet_count = 4294967295U; /* often UINT_MAX on 32-bit int */

    printf("=== Type Modifier: unsigned ===\n\n");
    printf("age           = %u\n", age);
    printf("packet_count  = %u (max for 32-bit unsigned int on many systems)\n",
           packet_count);
    printf("UINT_MAX      = %u\n", UINT_MAX);
    printf("sizeof(unsigned int) = %zu byte(s)\n", sizeof(unsigned int));

    return 0;
}
