/*
 * Topic   : String Functions
 * Module  : 08 - Arrays and Strings
 *
 * Common functions from <string.h>:
 *   strlen   length (excluding '\0')
 *   strcpy   copy (use strncpy for safety with size)
 *   strcat   append
 *   strcmp   compare (0 if equal)
 *
 * Compile: gcc "05 String-functions.c" -o arr05
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "C Programming";
    char dest[40];
    char extra[] = " Tutorial";
    int cmp;

    printf("=== String Functions ===\n\n");

    printf("src = \"%s\"\n", src);
    printf("strlen(src) = %zu\n\n", strlen(src));

    strcpy(dest, src);
    printf("After strcpy: dest = \"%s\"\n", dest);

    strcat(dest, extra);
    printf("After strcat: dest = \"%s\"\n\n", dest);

    cmp = strcmp(src, "C Programming");
    printf("strcmp(src, \"C Programming\") = %d (0 means equal)\n", cmp);

    cmp = strcmp(src, "Java");
    printf("strcmp(src, \"Java\") = %d\n", cmp);

    return 0;
}
