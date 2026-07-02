/*
 * Topic   : Scope and Lifetime
 * Module  : 07 - Functions
 *
 * Scope    : where a name is visible (block, function, file)
 * Lifetime : how long storage exists
 *
 *   - Local automatic: created when function runs, destroyed on return
 *   - static local: keeps value between calls; still local scope
 *   - global: visible in this file until program ends
 *
 * Compile: gcc "07 Scope-and-Lifetime.c" -o fn07
 */

#include <stdio.h>

int global_counter = 0;

void counter_demo(void)
{
    static int visits = 0; /* lifetime: whole program; scope: this function */
    int temp = 0;          /* lifetime: this call only */

    visits++;
    temp++;
    global_counter++;

    printf("  visits (static) = %d, temp (local) = %d, global = %d\n",
           visits, temp, global_counter);
}

int main(void)
{
    int main_local = 100;

    printf("=== Scope and Lifetime ===\n\n");

    printf("global_counter starts at %d\n", global_counter);
    printf("Call counter_demo three times:\n");
    counter_demo();
    counter_demo();
    counter_demo();

    printf("\nmain_local is visible only in main: %d\n", main_local);

    return 0;
}
