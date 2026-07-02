/*
 * Project : Library Management System
 * Level   : Intermediate
 *
 * Demonstrates structures, arrays, searching, and simple state updates.
 *
 * Build:
 *   cl /W4 /Fe:library.exe Library-Management-System.c
 */

#include <stdio.h>

#define BOOK_COUNT 4

typedef struct {
    int id;
    const char *title;
    const char *author;
    int available;
} Book;

static Book *find_book(Book books[], int id)
{
    int i;

    for (i = 0; i < BOOK_COUNT; i++) {
        if (books[i].id == id) {
            return &books[i];
        }
    }

    return NULL;
}

int main(void)
{
    Book books[BOOK_COUNT] = {
        {1, "The C Programming Language", "Kernighan and Ritchie", 1},
        {2, "C Primer Plus", "Stephen Prata", 1},
        {3, "Expert C Programming", "Peter van der Linden", 0},
        {4, "Head First C", "Griffiths and Griffiths", 1}
    };
    char line[100];
    int id;
    int i;
    Book *book;

    printf("Library Catalog\n");
    for (i = 0; i < BOOK_COUNT; i++) {
        printf("%d. %s by %s [%s]\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].available ? "available" : "borrowed");
    }

    printf("\nEnter book id to borrow: ");
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &id) != 1) {
        printf("Invalid book id.\n");
        return 1;
    }

    book = find_book(books, id);
    if (book == NULL) {
        printf("Book not found.\n");
        return 1;
    }

    if (!book->available) {
        printf("Sorry, \"%s\" is already borrowed.\n", book->title);
        return 1;
    }

    book->available = 0;
    printf("You borrowed \"%s\".\n", book->title);

    return 0;
}
