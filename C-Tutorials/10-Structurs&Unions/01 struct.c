/*
 * Topic   : struct
 * Module  : 10 - Structures and Unions
 *
 * struct groups related variables under one type:
 *   struct Student { char name[30]; int age; float gpa; };
 *   struct Student s1 = {"Ali", 20, 3.5f};
 *
 * Access members with the dot operator: s1.age
 *
 * Compile: gcc "01 struct.c" -o su01
 */

#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    float gpa;
};

int main(void)
{
    struct Student s1 = {"Sara", 21, 3.75f};
    struct Student s2;

    printf("=== struct ===\n\n");

    printf("s1: name=%s, age=%d, gpa=%.2f\n", s1.name, s1.age, s1.gpa);

    s2 = s1;
    s2.age = 22;
    printf("s2 (copy with changed age): age=%d\n", s2.age);
    printf("sizeof(struct Student) = %zu bytes\n", sizeof(struct Student));

    return 0;
}
