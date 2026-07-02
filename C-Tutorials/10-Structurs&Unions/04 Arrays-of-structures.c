/*
 * Topic   : Arrays of Structures
 * Module  : 10 - Structures and Unions
 *
 * Store many records of the same struct type:
 *   struct Book library[3];
 *
 * Compile: gcc "04 Arrays-of-structures.c" -o su04
 */

#include <stdio.h>

struct Book
{
    char title[40];
    char author[30];
    float price;
};

int main(void)
{
    struct Book library[3] = {
        {"The C Programming Language", "Kernighan & Ritchie", 45.0f},
        {"Clean Code", "Robert Martin", 38.5f},
        {"Intro to Algorithms", "Cormen", 89.0f}
    };
    int i;

    printf("=== Arrays of Structures ===\n\n");
    printf("%-35s %-22s %8s\n", "Title", "Author", "Price");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 3; i++)
        printf("%-35s %-22s %7.2f\n",
               library[i].title, library[i].author, library[i].price);

    return 0;
}
