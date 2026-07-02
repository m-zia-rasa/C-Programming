/*
 * Topic   : Data Type — void
 * Module  : 02 - Variables
 *
 * void means "no type" or "no value":
 *   - void function(void)  : returns nothing, takes no parameters
 *   - void *ptr            : generic pointer (advanced; shown briefly)
 *
 * You cannot declare: void x;  (no variable of type void)
 *
 * Compile: gcc "08 void.c" -o var08
 */

#include <stdio.h>

void print_banner(void); /* returns void, accepts void */

int main(void)
{
    printf("=== Data Type: void ===\n\n");

    print_banner();
    printf("main() returns int to the operating system.\n");
    printf("A void function performs an action but returns no value.\n");

    return 0;
}

void print_banner(void)
{
    printf("--- Banner from a void function ---\n");
}
