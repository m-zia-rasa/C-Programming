/*
 * Topic   : GDB Debugger
 * Module  : 17 - Debugging and Optimization
 *
 * Build with debug symbols:
 *   gcc -g "02 GDB-debugger.c" -o dbg02
 *
 * GDB quick reference (Linux/macOS/WSL/MinGW GDB):
 *   gdb ./dbg02
 *   break main
 *   break find_max
 *   run
 *   next          (step over)
 *   step          (step into)
 *   print i
 *   print arr[i]
 *   continue
 *   quit
 *
 * MSVC alternative: Visual Studio debugger or WinDbg; use /Zi and F5.
 *
 * Compile: gcc -g "02 GDB-debugger.c" -o dbg02
 */

#include <stdio.h>

int find_max(const int *arr, int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(void)
{
    int data[] = {3, 17, 8, 12, 5};
    int result;

    printf("=== GDB Debugger Practice Program ===\n\n");
    result = find_max(data, 5);
    printf("Max value = %d\n", result);

    return 0;
}
