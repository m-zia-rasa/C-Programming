/*
 * Topic   : fopen()
 * Module  : 12 - File Handling
 *
 * fopen(path, mode) opens a file and returns FILE* or NULL on failure.
 *
 * Common modes:
 *   "r"  read (file must exist)
 *   "w"  write (creates or truncates)
 *   "a"  append
 *   "rb" "wb"  binary read/write
 *
 * Compile: gcc "01 fopen.c" -o file01
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson01.txt";

    printf("=== fopen() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Could not open %s for writing.\n", filename);
        return 1;
    }

    printf("Successfully opened \"%s\" for writing.\n", filename);
    fprintf(fp, "File created by lesson 01.\n");
    fclose(fp);

    printf("Ready for other functions: fprintf, fgets, fscanf, etc.\n");

    return 0;
}
