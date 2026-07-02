/*
 * Topic   : Binary Files
 * Module  : 12 - File Handling
 *
 * Binary mode ("wb", "rb") stores raw bytes — integers, structs, arrays.
 * Use fwrite to write blocks and fread to read them back.
 *
 * Compile: gcc "07 Binary-files.c" -o file07
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char *filename = "lesson07.bin";
    int numbers[5] = {10, 20, 30, 40, 50};
    int loaded[5];
    size_t written, read_count;
    int i;

    printf("=== Binary Files ===\n\n");

    fp = fopen(filename, "wb");
    if (fp == NULL)
        return 1;

    written = fwrite(numbers, sizeof(int), 5, fp);
    fclose(fp);
    printf("fwrite: wrote %zu integers\n", written);

    fp = fopen(filename, "rb");
    if (fp == NULL)
        return 1;

    read_count = fread(loaded, sizeof(int), 5, fp);
    fclose(fp);

    printf("fread: read %zu integers\n", read_count);
    printf("Data read back: ");
    for (i = 0; i < 5; i++)
        printf("%d ", loaded[i]);
    printf("\n");

    return 0;
}
