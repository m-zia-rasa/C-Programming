/*
 * Topic   : Return Values
 * Module  : 07 - Functions
 *
 * return sends a value back to the caller and ends the function.
 * void functions return nothing.
 *
 * Compile: gcc "04 Return-Values.c" -o fn04
 */

#include <stdio.h>

int max_of_two(int a, int b);
char grade_from_score(int score);
float celsius_to_fahrenheit(float c);

int main(void)
{
    printf("=== Return Values ===\n\n");

    printf("max_of_two(12, 19)     = %d\n", max_of_two(12, 19));
    printf("grade_from_score(85)   = %c\n", grade_from_score(85));
    printf("celsius_to_fahrenheit(0) = %.1f F\n", celsius_to_fahrenheit(0.0f));

    return 0;
}

int max_of_two(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

char grade_from_score(int score)
{
    if (score >= 90)
        return 'A';
    if (score >= 80)
        return 'B';
    if (score >= 70)
        return 'C';
    return 'F';
}

float celsius_to_fahrenheit(float c)
{
    return (c * 9.0f / 5.0f) + 32.0f;
}
