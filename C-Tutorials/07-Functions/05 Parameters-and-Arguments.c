/*
 * Topic   : Parameters and Arguments
 * Module  : 07 - Functions
 *
 * Parameter  : variable in the function definition  (int a)
 * Argument   : actual value passed at the call       (add(3, 5) -> 3 and 5)
 *
 * C passes integers and floats by value (a copy is made).
 *
 * Compile: gcc "05 Parameters-and-Arguments.c" -o fn05
 */

#include <stdio.h>

void swap_wrong(int a, int b);
void print_sum(int x, int y);
void print_message(const char *msg);

int main(void)
{
    int m = 10;
    int n = 20;

    printf("=== Parameters and Arguments ===\n\n");
    printf("Before swap_wrong: m=%d, n=%d\n", m, n);

    swap_wrong(m, n); /* arguments: copies of m and n */
    printf("After swap_wrong:  m=%d, n=%d (unchanged — passed by value)\n\n", m, n);

    print_sum(7, 8);
    print_message("Arguments match parameter types and order.");

    return 0;
}

void swap_wrong(int a, int b)
{
    int temp = a;
    a = b;
    b = temp; /* only swaps local copies */
}

void print_sum(int x, int y)
{
    printf("print_sum(%d, %d) => %d\n", x, y, x + y);
}

void print_message(const char *msg)
{
    printf("Message: %s\n", msg);
}
