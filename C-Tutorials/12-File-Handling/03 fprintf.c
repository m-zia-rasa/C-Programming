/*
 * Topic   : fprintf()
 * Module  : 12 - File Handling
 *
 * fprintf(file, format, ...) works like printf but writes to a file.
 *
 * Compile: gcc "03 fprintf.c" -o file03
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson03.txt";
    int id = 101;
    const char *name = "Sara";
    float gpa = 3.85f;

    printf("=== fprintf() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
        return 1;

    fprintf(fp, "Student Report\n");
    fprintf(fp, "ID: %d\n", id);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "GPA: %.2f\n", gpa);

    fclose(fp);

    printf("Wrote formatted data to \"%s\".\n", filename);

    return 0;
}
