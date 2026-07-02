/*
 * Topic   : Debugging Techniques
 * Module  : 17 - Debugging and Optimization
 *
 * Practical techniques:
 *   - Reproduce the bug with the smallest test case
 *   - printf / fprintf tracing (log variable values)
 *   - assert() for conditions that must be true
 *   - Divide and conquer: comment out code blocks
 *   - Use a debugger instead of guessing
 *
 * Compile: gcc "01 Debugging-techniques.c" -o dbg01 -g
 */

#include <assert.h>
#include <stdio.h>

int average(const int *arr, int count)
{
    int i;
    int sum = 0;

    assert(arr != NULL);
    assert(count > 0);

    for (i = 0; i < count; i++)
    {
        printf("[trace] i=%d, arr[i]=%d, sum=%d\n", i, arr[i], sum);
        sum += arr[i];
    }

    return sum / count;
}

int main(void)
{
    int scores[] = {80, 90, 75, 88};

    printf("=== Debugging Techniques ===\n\n");
    printf("Average = %d\n", average(scores, 4));

    printf("\nTips: compile with -g, use asserts, trace values, then use GDB.\n");

    return 0;
}
