/*
 * Topic   : fgets()
 * Module  : 12 - File Handling
 *
 * fgets(buffer, size, file) reads a line (including spaces) safely.
 * It stops at newline or when size-1 chars are read, and adds '\0'.
 *
 * Compile: gcc "05 fgets.c" -o file05
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson05.txt";
    char line[80];

    printf("=== fgets() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
        return 1;
    fputs("Line one\n", fp);
    fputs("Line two\n", fp);
    fputs("Line three\n", fp);
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL)
        return 1;

    printf("Reading \"%s\" line by line:\n", filename);
    while (fgets(line, sizeof line, fp) != NULL)
        printf("  %s", line);

    fclose(fp);

    return 0;
}
