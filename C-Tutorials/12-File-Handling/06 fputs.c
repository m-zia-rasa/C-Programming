/*
 * Topic   : fputs()
 * Module  : 12 - File Handling
 *
 * fputs(string, file) writes a text string to a file.
 * Does not add a newline automatically — include \n if needed.
 *
 * Compile: gcc "06 fputs.c" -o file06
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson06.txt";

    printf("=== fputs() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
        return 1;

    fputs("First line written with fputs.\n", fp);
    fputs("Second line.\n", fp);
    fputs("Third line.\n", fp);

    fclose(fp);

    printf("Wrote three lines to \"%s\".\n", filename);

    return 0;
}
