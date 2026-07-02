/*
 * Topic   : fclose()
 * Module  : 12 - File Handling
 *
 * fclose(fp) flushes buffers and releases the file handle.
 * Always fclose every successful fopen.
 *
 * Return value: 0 on success, EOF on error.
 *
 * Compile: gcc "02 fclose.c" -o file02
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson02.txt";
    int status;

    printf("=== fclose() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("fopen failed.\n");
        return 1;
    }

    fputs("Closing this file properly.\n", fp);

    status = fclose(fp);
    if (status == 0)
        printf("fclose succeeded for \"%s\".\n", filename);
    else
        printf("fclose returned an error.\n");

    fp = NULL; /* good habit after fclose */

    return 0;
}
