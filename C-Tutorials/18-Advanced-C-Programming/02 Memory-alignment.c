/*
 * Topic   : Memory Alignment
 * Module  : 18 - Advanced C Programming
 *
 * CPUs read memory efficiently when data sits at aligned addresses.
 * Struct padding may appear between members for alignment.
 *
 * Compile: gcc "02 Memory-alignment.c" -o adv02
 */

#include <stddef.h>
#include <stdio.h>

struct PackedDemo
{
    char a;
    int b;
    char c;
};

struct AlignedDemo
{
    int x;
    double y;
    char z;
};

int main(void)
{
    struct PackedDemo s1 = {'A', 100, 'B'};
    struct AlignedDemo s2 = {1, 2.5, 'C'};

    printf("=== Memory Alignment ===\n\n");

    printf("struct PackedDemo size = %zu, offsetof(b)=%zu\n",
           sizeof(struct PackedDemo), offsetof(struct PackedDemo, b));
    printf("struct AlignedDemo size = %zu, offsetof(y)=%zu\n",
           sizeof(struct AlignedDemo), offsetof(struct AlignedDemo, y));

    printf("\nValues: s1.b=%d, s2.y=%.1f\n", s1.b, s2.y);
    printf("Padding bytes keep members aligned for faster access.\n");

    return 0;
}
