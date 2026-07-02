/*
 * Topic   : Memory Leak Detection
 * Module  : 17 - Debugging and Optimization
 *
 * Detection options:
 *   Valgrind: valgrind --leak-check=full ./program
 *   GCC/Clang: -fsanitize=address (AddressSanitizer)
 *   MSVC: Debug CRT reporting (_CRTDBG_MAP_ALLOC in debug builds)
 *
 * Compile (ASan example):
 *   gcc -g -fsanitize=address "05 Memory-leak-detection.c" -o dbg05
 *
 * Compile (normal):
 *   gcc -g "05 Memory-leak-detection.c" -o dbg05
 */

#include <stdio.h>
#include <stdlib.h>

void safe_copy(const char *text)
{
    char *copy = malloc(50);
    if (copy == NULL)
        return;
    snprintf(copy, 50, "%s", text);
    printf("Copied: %s\n", copy);
    free(copy);
}

void leaky_copy_bad(void)
{
    char *copy = malloc(50);
    if (copy == NULL)
        return;
    snprintf(copy, 50, "leaked block");
    printf("Allocated block but did not free (intentional bad example)\n");
    /* free(copy);  enable this line to fix leak */
    (void)copy;
}

int main(void)
{
    printf("=== Memory Leak Detection ===\n\n");

    safe_copy("Good path");
    printf("\nFor tools practice, call leaky_copy_bad() from a test build.\n");
    printf("Current run uses only safe_copy (no leak).\n");

    return 0;
}
