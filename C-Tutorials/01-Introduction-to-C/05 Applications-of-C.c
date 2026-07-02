/*
 * Topic   : Applications of C
 * Module  : 01 - Introduction to C
 *
 * C remains widely used where performance, control, and stability matter:
 *   - Operating systems (Linux kernel, Windows components)
 *   - Embedded systems (microcontrollers, IoT firmware)
 *   - Databases and language runtimes (SQLite, Python C API, etc.)
 *   - Game engines, graphics, and real-time audio
 *   - Networking stacks and device drivers
 *   - Compilers and interpreters for other languages
 *
 * Compile: gcc "05 Applications-of-C.c" -o intro05
 */

#include <stdio.h>

int main(void)
{
    const char *applications[] = {
        "Operating systems and kernels",
        "Embedded and real-time systems",
        "Compilers, interpreters, and virtual machines",
        "Databases and high-performance servers",
        "Drivers, firmware, and hardware interfaces",
        "Games, graphics, and multimedia libraries"
    };
    const int n = (int)(sizeof applications / sizeof applications[0]);
    int i;

    printf("=== Applications of C ===\n\n");
    printf("C is chosen when the program must be fast, small, or close to hardware.\n\n");

    for (i = 0; i < n; i++)
        printf("  [%d] %s\n", i + 1, applications[i]);

    printf("\nMany languages you use daily rely on C under the hood.\n");

    return 0;
}
