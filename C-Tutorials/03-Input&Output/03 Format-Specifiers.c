/*
 * Topic   : Format Specifiers
 * Module  : 03 - Input and Output
 *
 * Format specifiers tell printf/scanf how to interpret each value.
 * Common specifiers:
 *   %d or %i  int
 *   %u        unsigned int
 *   %f        float / double (printf)
 *   %lf       double (scanf)
 *   %c        char
 *   %s        string (char array)
 *   %x %X     hexadecimal
 *   %p        pointer address
 *   %zu       size_t (sizeof result)
 *
 * Flags: %-10s (left align), %05d (zero pad), %.2f (2 decimals)
 *
 * Compile: gcc "03 Format-Specifiers.c" -o io03
 */

#include <stdio.h>

int main(void)
{
    int n = 42;
    unsigned int u = 4000000000U;
    float f = 3.14159f;
    double d = 2.718281828;
    char ch = 'Z';
    char text[] = "C";
    int hex_val = 255;

    printf("=== Format Specifiers ===\n\n");

    printf("Integer      %%d  : %d\n", n);
    printf("Unsigned     %%u  : %u\n", u);
    printf("Float        %%f  : %f\n", f);
    printf("Double       %%f  : %.6f\n", d);
    printf("Character    %%c  : %c\n", ch);
    printf("String       %%s  : %s language\n", text);
    printf("Hex lower    %%x  : %x\n", hex_val);
    printf("Hex upper    %%X  : %X\n", hex_val);
    printf("Pointer      %%p  : %p\n", (void *)&n);

    printf("\nWidth and precision:\n");
    printf("  Zero-padded %%05d : %05d\n", n);
    printf("  Left align  %%-8s : %-8s|\n", "left");
    printf("  2 decimals  %%.2f : %.2f\n", f);

    printf("\nsizeof(int) = %zu bytes\n", sizeof(int));

    return 0;
}
