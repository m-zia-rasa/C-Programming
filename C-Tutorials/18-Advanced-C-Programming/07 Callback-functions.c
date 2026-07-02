/*
 * Topic   : Callback Functions
 * Module  : 18 - Advanced C Programming
 *
 * A callback is a function passed as an argument to be called later.
 * Common in event handling, sorting comparators, and libraries.
 *
 * Compile: gcc "07 Callback-functions.c" -o adv07
 */

#include <stdio.h>

typedef void (*PrintCallback)(int value);

void for_each(const int *arr, int n, PrintCallback cb)
{
    int i;
    for (i = 0; i < n; i++)
        cb(arr[i]);
}

void print_value(int value)
{
    printf("%d ", value);
}

void print_double(int value)
{
    printf("%d ", value * 2);
}

int main(void)
{
    int data[] = {1, 2, 3, 4, 5};

    printf("=== Callback Functions ===\n\n");

    printf("Normal callback: ");
    for_each(data, 5, print_value);
    printf("\n");

    printf("Double callback: ");
    for_each(data, 5, print_double);
    printf("\n");

    return 0;
}
