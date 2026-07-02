/*
 * Topic   : Assignment Operators
 * Module  : 04 - Operators
 *
 * =   simple assignment
 * +=  add then assign      -=  subtract then assign
 * *=  multiply then assign /=  divide then assign
 * %=  modulus then assign
 *
 * Example: x += 3;  is the same as  x = x + 3;
 *
 * Compile: gcc "04 Assignment.c" -o op04
 */

#include <stdio.h>

int main(void)
{
    int score = 50;

    printf("=== Assignment Operators ===\n\n");
    printf("Initial score = %d\n", score);

    score += 10;
    printf("After score += 10  : %d\n", score);

    score -= 5;
    printf("After score -= 5   : %d\n", score);

    score *= 2;
    printf("After score *= 2   : %d\n", score);

    score /= 3;
    printf("After score /= 3   : %d  (integer division)\n", score);

    score %= 4;
    printf("After score %%= 4  : %d\n", score);

    return 0;
}
