/*
 * Topic   : Data Type — double
 * Module  : 02 - Variables
 *
 * double stores double-precision floats (about 15 digits).
 * Default for decimal literals without suffix: 3.14 is a double.
 *
 * Compile: gcc "06 double.c" -o var06
 */

#include <stdio.h>

int main(void)
{
    double pi = 3.141592653589793;
    double avogadro = 6.02214076e23; /* scientific notation */

    printf("=== Data Type: double ===\n\n");
    printf("pi      = %.15f\n", pi);
    printf("avogadro= %.6e particles/mol (approx.)\n", avogadro);
    printf("sizeof(double) = %zu byte(s)\n", sizeof(double));

    return 0;
}
