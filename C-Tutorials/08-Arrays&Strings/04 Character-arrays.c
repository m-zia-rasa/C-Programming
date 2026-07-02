/*
 * Topic   : Character Arrays
 * Module  : 08 - Arrays and Strings
 *
 * In C, a string is a char array ending with '\0' (null terminator).
 *   char word[] = "Hi";   (stores 'H', 'i', and '\0')
 *   char buf[20] = "text";
 *
 * Compile: gcc "04 Character-arrays.c" -o arr04
 */

#include <stdio.h>

int main(void)
{
    char greeting[] = "Hello";
    char letters[] = {'C', ' ', 'L', 'a', 'n', 'g', '\0'};
    char buffer[30] = "student";
    int i = 0;

    printf("=== Character Arrays ===\n\n");

    printf("greeting = %s\n", greeting);
    printf("letters  = %s\n", letters);
    printf("buffer   = %s\n\n", buffer);

    printf("Characters in greeting:\n");
    while (greeting[i] != '\0')
    {
        printf("  greeting[%d] = '%c' (ASCII %d)\n", i, greeting[i], greeting[i]);
        i++;
    }

    printf("\nLength including '\\0': %zu bytes\n", sizeof greeting);

    return 0;
}
