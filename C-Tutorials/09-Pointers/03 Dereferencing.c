/*
 * Topic   : Dereferencing
 * Module  : 09 - Pointers
 *
 * *pointer reads or writes the value at the address stored in pointer.
 * This is called dereferencing.
 *
 *   *ptr = 50;   change the int at that address
 *   x = *ptr;    read the int at that address
 *
 * Compile: gcc "03 Dereferencing.c" -o ptr03
 */

#include <stdio.h>

int main(void)
{
    int score = 70;
    int *p = &score;

    printf("=== Dereferencing ===\n\n");
    printf("Before: score = %d\n", score);

    *p = 95; /* write through pointer */
    printf("After *p = 95: score = %d\n", score);

    printf("Reading with *p: %d\n", *p);

    return 0;
}
