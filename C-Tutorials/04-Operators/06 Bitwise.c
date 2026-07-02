/*
 * Topic   : Bitwise Operators
 * Module  : 04 - Operators
 *
 * Work on individual bits (integers only):
 *   &   AND     |   OR      ^   XOR
 *   ~   NOT (one operand)    <<  left shift    >>  right shift
 *
 * Example: 5 is 0101 in binary, 3 is 0011
 *
 * Compile: gcc "06 Bitwise.c" -o op06
 */

#include <stdio.h>

int main(void)
{
    unsigned int a = 5;  /* 0101 */
    unsigned int b = 3;  /* 0011 */

    printf("=== Bitwise Operators ===\n\n");
    printf("a = %u, b = %u\n\n", a, b);

    printf("a & b  (AND)  = %u\n", a & b);
    printf("a | b  (OR)   = %u\n", a | b);
    printf("a ^ b  (XOR)  = %u\n", a ^ b);
    printf("~a     (NOT)  = %u  (result width depends on type)\n", ~a);
    printf("a << 1 (left shift)  = %u\n", a << 1);
    printf("a >> 1 (right shift) = %u\n", a >> 1);

    return 0;
}
