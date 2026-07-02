/*
 * Topic   : Type Modifier — short
 * Module  : 02 - Variables
 *
 * short (usually short int) is at least 16 bits — smaller range than int.
 * Often written: short, short int
 *
 * Compile: gcc "09 short.c" -o var09
 */

#include <limits.h>
#include <stdio.h>

int main(void)
{
    short year = 2026;
    short temperature = -5;

    printf("=== Type Modifier: short ===\n\n");
    printf("year        = %hd\n", year);
    printf("temperature = %hd C\n", temperature);
    printf("SHRT_MIN    = %d\n", SHRT_MIN);
    printf("SHRT_MAX    = %d\n", SHRT_MAX);
    printf("sizeof(short) = %zu byte(s)\n", sizeof(short));

    return 0;
}
