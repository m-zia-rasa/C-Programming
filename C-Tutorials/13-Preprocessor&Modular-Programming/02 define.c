/*
 * Topic   : #define
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * #define creates symbolic constants replaced before compile time.
 * No type checking; use const for typed constants in modern C.
 *
 * Compile: gcc "02 define.c" -o pp02
 */

#include <stdio.h>

#define PI 3.14159265
#define MAX_SIZE 100
#define APP_NAME "C Tutorial"

int main(void)
{
    printf("=== #define ===\n\n");
    printf("APP_NAME  = %s\n", APP_NAME);
    printf("MAX_SIZE  = %d\n", MAX_SIZE);
    printf("PI        = %.8f\n", PI);
    printf("Circle r=2 area = %.4f\n", PI * 2.0 * 2.0);

    return 0;
}
