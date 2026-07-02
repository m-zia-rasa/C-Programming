/*
 * Project : Unit Converter
 * Level   : Beginner
 *
 * Converts common units using functions and a switch statement.
 *
 * Build:
 *   cl /W4 /Fe:converter.exe Unit-Converter.c
 */

#include <stdio.h>

static void show_menu(void)
{
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Kilometers to Miles\n");
    printf("3. Kilograms to Pounds\n");
    printf("Choose conversion: ");
}

int main(void)
{
    char line[100];
    int choice;
    double value;

    show_menu();
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &choice) != 1) {
        printf("Invalid menu choice.\n");
        return 1;
    }

    printf("Enter value: ");
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%lf", &value) != 1) {
        printf("Invalid numeric value.\n");
        return 1;
    }

    switch (choice) {
    case 1:
        printf("%.2f C = %.2f F\n", value, (value * 9.0 / 5.0) + 32.0);
        break;
    case 2:
        printf("%.2f km = %.2f miles\n", value, value * 0.621371);
        break;
    case 3:
        printf("%.2f kg = %.2f lb\n", value, value * 2.20462);
        break;
    default:
        printf("Unknown conversion.\n");
        return 1;
    }

    return 0;
}
