/*
 * Project : Contact Manager
 * Level   : Intermediate
 *
 * Demonstrates structures, arrays, string handling, and saving records to a file.
 *
 * Build:
 *   cl /W4 /Fe:contacts.exe Contact-Manager.c
 */

#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 20
#define FIELD_SIZE 50

typedef struct {
    char name[FIELD_SIZE];
    char phone[FIELD_SIZE];
    char email[FIELD_SIZE];
} Contact;

static void remove_newline(char text[])
{
    size_t length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
}

static void read_field(const char *prompt, char destination[], size_t size)
{
    printf("%s", prompt);
    if (fgets(destination, (int)size, stdin) != NULL) {
        remove_newline(destination);
    }
}

static int save_contacts(const Contact contacts[], int count, const char *path)
{
    FILE *file = fopen(path, "w");
    int i;

    if (file == NULL) {
        return 0;
    }

    for (i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }

    fclose(file);
    return 1;
}

int main(void)
{
    Contact contacts[MAX_CONTACTS];
    char line[100];
    int count = 0;
    int i;

    printf("How many contacts do you want to add (1-%d)? ", MAX_CONTACTS);
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &count) != 1 ||
        count < 1 || count > MAX_CONTACTS) {
        printf("Invalid contact count.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        read_field("Name : ", contacts[i].name, sizeof contacts[i].name);
        read_field("Phone: ", contacts[i].phone, sizeof contacts[i].phone);
        read_field("Email: ", contacts[i].email, sizeof contacts[i].email);
    }

    printf("\nSaved contacts:\n");
    for (i = 0; i < count; i++) {
        printf("%d. %s | %s | %s\n", i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }

    if (!save_contacts(contacts, count, "contacts.csv")) {
        printf("Could not save contacts.csv.\n");
        return 1;
    }

    printf("\ncontacts.csv created successfully.\n");
    return 0;
}
