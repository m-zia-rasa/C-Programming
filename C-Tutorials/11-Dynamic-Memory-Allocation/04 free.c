/*
 * Topic   : free()
 * Module  : 11 - Dynamic Memory Allocation
 *
 * free(ptr) releases heap memory allocated by malloc/calloc/realloc.
 *
 * Rules:
 *   - Every malloc/calloc/realloc should have a matching free
 *   - Do not free the same pointer twice
 *   - Do not use the pointer after free (set to NULL if you keep the variable)
 *
 * Compile: gcc "04 free.c" -o mem04
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;
    size_t size = 20;

    printf("=== free() ===\n\n");

    buffer = malloc(size);
    if (buffer == NULL)
        return 1;

    snprintf(buffer, size, "Dynamic text");
    printf("Before free: %s\n", buffer);

    free(buffer);
    buffer = NULL; /* avoid accidental use and double-free */

    printf("After free: pointer set to NULL.\n");
    printf("Program ends without leaking this block.\n");

    return 0;
}
