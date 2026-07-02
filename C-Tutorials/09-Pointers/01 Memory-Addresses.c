/*
 * Topic   : Memory Addresses
 * Module  : 09 - Pointers
 *
 * Each variable lives at a memory address. The address-of operator & gives
 * that location. %p prints an address (cast to void* for printf).
 *
 * Compile: gcc "01 Memory-Addresses.c" -o ptr01
 */

#include <stdio.h>

int main(void)
{
    int age = 25;
    float gpa = 3.8f;
    char grade = 'A';

    printf("=== Memory Addresses ===\n\n");

    printf("Variable   Value      Address\n");
    printf("----------------------------------------\n");
    printf("age        %d         %p\n", age, (void *)&age);
    printf("gpa        %.1f       %p\n", gpa, (void *)&gpa);
    printf("grade      %c         %p\n", grade, (void *)&grade);

    printf("\n&age means \"address of age\" — not the value stored in age.\n");

    return 0;
}
