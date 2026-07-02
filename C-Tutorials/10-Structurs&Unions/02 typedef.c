/*
 * Topic   : typedef
 * Module  : 10 - Structures and Unions
 *
 * typedef creates an alias for a type name:
 *   typedef struct Student Student;
 *   Student s;   instead of struct Student s;
 *
 * Also works for built-in types: typedef unsigned int uint;
 *
 * Compile: gcc "02 typedef.c" -o su02
 */

#include <stdio.h>

typedef struct
{
    int id;
    char course[20];
} Course;

typedef unsigned int uint;

int main(void)
{
    Course c1 = {101, "C Programming"};
    uint count = 5;

    printf("=== typedef ===\n\n");

    printf("Course id=%d, name=%s\n", c1.id, c1.course);
    printf("uint count = %u\n", count);
    printf("\ntypedef shortens type names and improves readability.\n");

    return 0;
}
