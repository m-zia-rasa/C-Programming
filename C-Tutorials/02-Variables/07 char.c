/*
 * Topic   : Data Type — char
 * Module  : 02 - Variables
 *
 * char holds one character (1 byte). Use single quotes: 'A'
 * Strings are arrays of char ending with '\0': char s[] = "Hi";
 *
 * Compile: gcc "07 char.c" -o var07
 */

#include <stdio.h>

int main(void)
{
    char letter = 'A';
    char digit = '7';
    char message[] = "Hello"; /* 6 bytes: H e l l o \0 */

    printf("=== Data Type: char ===\n\n");
    printf("letter  = %c (ASCII %d)\n", letter, letter);
    printf("digit   = %c\n", digit);
    printf("message = %s\n", message);
    printf("sizeof(char) = %zu byte\n", sizeof(char));
    printf("length of \"%s\" string = %zu characters (+ null terminator)\n",
           message, sizeof message - 1);

    return 0;
}
