#include <stdio.h>

int main(void)
{
    /* Declaration + initialization in one step */
    int age = 25;
    float weight = 50.6f;
    char grade = 'A';
    char name[] = "Zia"; /* string stored as character array */

    printf("=== Initializing Variables ===\n\n");
    printf("Hello, my name is %s, and I am %d years old.\n", name, age);
    printf("Weight: %.1f kg, Grade: %c\n", weight, grade);

    /* Re-assignment changes the value later */
    age = 26;
    printf("\nAfter birthday: age = %d\n", age);

    return 0;
}
