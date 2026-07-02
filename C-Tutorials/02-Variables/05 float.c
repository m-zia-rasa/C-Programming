/*
 * Topic   : Data Type — float
 * Module  : 02 - Variables
 *
 * float stores single-precision floating-point numbers (about 6–7 digits).
 * Append 'f' to literals: 3.14f  (otherwise double is assumed).
 *
 * Compile: gcc "05 float.c" -o var05
 */

#include <stdio.h>

int main(void)
{
    float pi = 3.14159f;
    float celsius = 36.6f;
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("=== Data Type: float ===\n\n");
    printf("pi        = %.5f\n", pi);
    printf("celsius   = %.1f C\n", celsius);
    printf("fahrenheit= %.1f F\n", fahrenheit);
    printf("sizeof(float) = %zu byte(s)\n", sizeof(float));

    return 0;
}
