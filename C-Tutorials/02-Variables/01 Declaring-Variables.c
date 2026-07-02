#include <stdio.h>

int main(void)
{
    /* Each line below is a declaration (no initial value yet) */
    int count;
    float price;
    double precise_value;
    char initial;
    short small_number;

    /* Assign before use — safe practice after declaration */
    count = 10;
    price = 19.99f;
    precise_value = 3.141592653589793;
    initial = 'C';
    small_number = 100;

    printf("=== Declaring Variables ===\n\n");
    printf("count          = %d\n", count);
    printf("price          = %.2f\n", price);
    printf("precise_value  = %.15f\n", precise_value);
    printf("initial        = %c\n", initial);
    printf("small_number   = %hd\n", small_number);

    return 0;
}
