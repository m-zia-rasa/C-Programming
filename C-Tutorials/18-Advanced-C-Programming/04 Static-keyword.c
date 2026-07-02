/*
 * Topic   : static Keyword
 * Module  : 18 - Advanced C Programming
 *
 * static meanings:
 *   - static local variable: keeps value between function calls
 *   - static global/function: limited to this file (internal linkage)
 *
 * Compile: gcc "04 Static-keyword.c" -o adv04
 */

#include <stdio.h>

static int file_counter = 0; /* visible only in this file */

void counter_call(void)
{
    static int call_count = 0;
    call_count++;
    file_counter++;
    printf("  call_count=%d, file_counter=%d\n", call_count, file_counter);
}

int main(void)
{
    printf("=== static Keyword ===\n\n");
    printf("Three calls to counter_call():\n");
    counter_call();
    counter_call();
    counter_call();

    return 0;
}
