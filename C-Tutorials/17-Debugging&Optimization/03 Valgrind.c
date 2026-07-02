/*
 * Topic   : Valgrind
 * Module  : 17 - Debugging and Optimization
 *
 * Valgrind (Linux/macOS) checks memory errors and leaks at runtime.
 *
 * Examples:
 *   gcc -g "03 Valgrind.c" -o dbg03
 *   valgrind --leak-check=full ./dbg03
 *
 * Windows alternatives: Visual Studio CRT debug heap, Dr. Memory, ASan.
 *
 * This program uses correct allocate/free (no leak in normal run).
 *
 * Compile: gcc -g "03 Valgrind.c" -o dbg03
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *buffer;
    int i;

    printf("=== Valgrind (Memory Tooling) ===\n\n");

    buffer = malloc(10 * sizeof(int));
    if (buffer == NULL)
        return 1;

    for (i = 0; i < 10; i++)
        buffer[i] = i * i;

    printf("Sum of squares 0..9 = ");
    for (i = 0; i < 10; i++)
        printf("%d ", buffer[i]);
    printf("\n");

    free(buffer);
    buffer = NULL;

    printf("\nTo practice Valgrind, temporarily remove free(buffer) and rerun.\n");

    return 0;
}
