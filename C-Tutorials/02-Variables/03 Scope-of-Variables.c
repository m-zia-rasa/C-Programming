/*
 * Topic   : Scope of Variables
 * Module  : 02 - Variables
 *
 * Scope = region of code where a name is visible.
 *
 *   - Local (function): declared inside a function; gone when function ends
 *   - Block: declared inside { }; visible only inside that block
 *   - Global: declared outside all functions; visible in this file
 *   - static local: keeps value between calls; still not visible outside
 *
 * Compile: gcc "03 Scope-of-Variables.c" -o var03
 */

#include <stdio.h>

int global_counter = 0; /* file scope (global) */

void demo_function(void)
{
    static int call_count = 0; /* persists between calls; local to function */
    int local_only = 0;        /* created anew each call */

    call_count++;
    local_only++;
    global_counter++;

    printf("  inside demo_function: call_count=%d, local_only=%d, global=%d\n",
           call_count, local_only, global_counter);
}

int main(void)
{
    int outer = 1;

    printf("=== Scope of Variables ===\n\n");

    printf("Global starts at %d\n", global_counter);
    demo_function();
    demo_function();

    {
        int block_only = 99; /* visible only until this block ends */
        printf("\nInside block: block_only = %d\n", block_only);
    }
    printf("Outside block: outer (main) = %d\n", outer);

    return 0;
}
