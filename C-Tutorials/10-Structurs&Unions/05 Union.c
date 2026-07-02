/*
 * Topic   : Union
 * Module  : 10 - Structures and Unions
 *
 * union members share the same memory — only one view is active at a time.
 * Size equals the largest member (plus alignment padding).
 *
 * Compile: gcc "05 Union.c" -o su05
 */

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main(void)
{
    union Data value;

    printf("=== Union ===\n\n");
    printf("sizeof(union Data) = %zu bytes (size of largest member)\n\n",
           sizeof(union Data));

    value.i = 65;
    printf("Store as int:    value.i = %d\n", value.i);

    value.f = 3.14f;
    printf("Store as float:  value.f = %.2f (overwrites int bits)\n", value.f);

    value.c = 'A';
    printf("Store as char:   value.c = '%c'\n", value.c);
    printf("Reading int now: value.i = %d (bits changed)\n", value.i);

    return 0;
}
