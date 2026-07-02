/*
 * Topic   : fscanf()
 * Module  : 12 - File Handling
 *
 * fscanf(file, format, ...) reads formatted data from a file,
 * similar to scanf but from disk instead of keyboard.
 *
 * Compile: gcc "04 fscanf.c" -o file04
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson04.txt";
    int id;
    char name[30];
    float gpa;

    printf("=== fscanf() ===\n\n");

    fp = fopen(filename, "w");
    if (fp == NULL)
        return 1;
    fprintf(fp, "102 Ali 3.60\n");
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL)
        return 1;

    if (fscanf(fp, "%d %29s %f", &id, name, &gpa) == 3)
        printf("Read from file: id=%d, name=%s, gpa=%.2f\n", id, name, gpa);
    else
        printf("fscanf could not read all fields.\n");

    fclose(fp);

    return 0;
}
