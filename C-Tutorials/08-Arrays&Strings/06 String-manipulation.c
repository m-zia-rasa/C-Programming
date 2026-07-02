/*
 * Topic   : String Manipulation
 * Module  : 08 - Arrays and Strings
 *
 * Manual operations without relying only on library helpers:
 *   - count characters
 *   - copy to another buffer
 *   - reverse in place
 *
 * Compile: gcc "06 String-manipulation.c" -o arr06
 */

#include <stdio.h>

int string_length(const char *s);
void string_copy(char *dest, const char *src);
void string_reverse(char *s);

int main(void)
{
    char text[] = "Arrays";
    char copy[20];

    printf("=== String Manipulation ===\n\n");
    printf("Original: \"%s\"\n", text);
    printf("Length   : %d\n", string_length(text));

    string_copy(copy, text);
    printf("Copy     : \"%s\"\n", copy);

    string_reverse(text);
    printf("Reversed : \"%s\"\n", text);

    return 0;
}

int string_length(const char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void string_copy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void string_reverse(char *s)
{
    int i = 0;
    int j = string_length(s) - 1;
    char temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
