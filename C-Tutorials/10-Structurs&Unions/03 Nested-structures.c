/*
 * Topic   : Nested Structures
 * Module  : 10 - Structures and Unions
 *
 * A struct can contain another struct as a member.
 * Access inner members: outer.inner.member
 *
 * Compile: gcc "03 Nested-structures.c" -o su03
 */

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[30];
    struct Date joined;
};

int main(void)
{
    struct Employee emp = {1, "Ahmad", {15, 3, 2024}};

    printf("=== Nested Structures ===\n\n");

    printf("Employee %d: %s\n", emp.id, emp.name);
    printf("Joined on: %02d/%02d/%d\n",
           emp.joined.day, emp.joined.month, emp.joined.year);

    return 0;
}
