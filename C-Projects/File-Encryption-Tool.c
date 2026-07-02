/*
 * Project : File Encryption Tool
 * Level   : Intermediate
 *
 * Uses XOR encryption. Running the program twice with the same key restores
 * the original file because XOR is reversible.
 *
 * Build:
 *   cl /W4 /Fe:encrypt.exe File-Encryption-Tool.c
 *
 * Example:
 *   encrypt.exe input.txt output.bin 77
 *   encrypt.exe output.bin restored.txt 77
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *input;
    FILE *output;
    int byte_value;
    int key;

    if (argc != 4) {
        printf("Usage: %s <input-file> <output-file> <key-0-255>\n", argv[0]);
        return 1;
    }

    key = atoi(argv[3]);
    if (key < 0 || key > 255) {
        printf("Key must be between 0 and 255.\n");
        return 1;
    }

    input = fopen(argv[1], "rb");
    if (input == NULL) {
        printf("Could not open input file: %s\n", argv[1]);
        return 1;
    }

    output = fopen(argv[2], "wb");
    if (output == NULL) {
        printf("Could not create output file: %s\n", argv[2]);
        fclose(input);
        return 1;
    }

    while ((byte_value = fgetc(input)) != EOF) {
        fputc(byte_value ^ key, output);
    }

    fclose(input);
    fclose(output);

    printf("File processed successfully.\n");
    return 0;
}
