/*
 * Topic   : scanf()
 * Module  : 03 - Input and Output
 *
 * scanf() reads formatted input from the keyboard (stdin).
 * Always pass the ADDRESS of variables: scanf("%d", &age);
 *
 * For strings, limit width to avoid overflow:
 *   char name[50];
 *   scanf("%49s", name);
 *
 * Compile: gcc "02 scanf.c" -o io02
 * Run     : ./io02   then type values when prompted
 * Demo    : echo Sara 20 | io02   (Linux/macOS pipe example)
 */

#include <stdio.h>

int main(void)
{
    char name[50];
    int age = 0;
    float height = 0.0f;

    printf("=== scanf() ===\n\n");

    printf("Enter your name (no spaces): ");
    if (scanf("%49s", name) != 1)
    {
        printf("Could not read name.\n");
        return 1;
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)
    {
        printf("Could not read age.\n");
        return 1;
    }

    printf("Enter your height in meters (e.g. 1.75): ");
    if (scanf("%f", &height) != 1)
    {
        printf("Could not read height.\n");
        return 1;
    }

    printf("\n--- Values you entered ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Height : %.2f m\n", height);

    return 0;
}
