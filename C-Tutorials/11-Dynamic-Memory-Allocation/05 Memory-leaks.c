/*
 * Topic   : Memory Leaks
 * Module  : 11 - Dynamic Memory Allocation
 *
 * A memory leak happens when allocated heap memory is never freed.
 * The program loses track of the block; it stays allocated until exit.
 *
 * Short programs may hide leaks because the OS reclaims memory on exit,
 * but servers and long-running apps must free every allocation.
 *
 * Compile: gcc "05 Memory-leaks.c" -o mem05
 */

#include <stdio.h>
#include <stdlib.h>

/* BAD: allocates and never frees — leak if called many times */
void leaky_function(void)
{
    int *data = malloc(100 * sizeof(int));
    if (data == NULL)
        return;
    data[0] = 42;
    printf("  leaky_function allocated 100 ints (not freed) — LEAK\n");
    /* missing free(data); */
}

/* GOOD: always free before returning */
void safe_function(void)
{
    int *data = malloc(100 * sizeof(int));
    if (data == NULL)
        return;
    data[0] = 99;
    printf("  safe_function allocated 100 ints and freed them — OK\n");
    free(data);
}

int main(void)
{
    printf("=== Memory Leaks ===\n\n");

    printf("Calling leaky_function twice (2 leaked blocks in a real long-running app):\n");
    leaky_function();
    leaky_function();

    printf("\nCalling safe_function twice (no leak):\n");
    safe_function();
    safe_function();

    printf("\nFix leaks: call free() for every successful malloc/calloc/realloc.\n");
    printf("Tools: Valgrind, AddressSanitizer, Visual Studio CRT debug heap.\n");

    return 0;
}
