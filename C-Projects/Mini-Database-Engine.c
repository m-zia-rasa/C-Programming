/*
 * Project : Mini Database Engine
 * Level   : Advanced
 *
 * A tiny fixed-table database with insert, select-all, and save-to-file features.
 * It teaches records, table capacity, and simple persistence.
 *
 * Build:
 *   cl /W4 /Fe:database.exe Mini-Database-Engine.c
 */

#include <stdio.h>
#include <string.h>

#define MAX_ROWS 50
#define NAME_SIZE 40
#define EMAIL_SIZE 60

typedef struct {
    int id;
    char name[NAME_SIZE];
    char email[EMAIL_SIZE];
} Row;

typedef struct {
    Row rows[MAX_ROWS];
    int count;
} Table;

static void trim_newline(char text[])
{
    size_t length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
}

static void insert_row(Table *table)
{
    char line[100];
    Row row;

    if (table->count >= MAX_ROWS) {
        printf("Table is full.\n");
        return;
    }

    printf("id: ");
    if (fgets(line, sizeof line, stdin) == NULL || sscanf(line, "%d", &row.id) != 1) {
        printf("Invalid id.\n");
        return;
    }

    printf("name: ");
    if (fgets(row.name, sizeof row.name, stdin) == NULL) {
        return;
    }
    trim_newline(row.name);

    printf("email: ");
    if (fgets(row.email, sizeof row.email, stdin) == NULL) {
        return;
    }
    trim_newline(row.email);

    table->rows[table->count] = row;
    table->count++;
    printf("Inserted.\n");
}

static void select_all(const Table *table)
{
    int i;

    printf("\nID    Name                                Email\n");
    printf("----  ----------------------------------  ------------------------------\n");
    for (i = 0; i < table->count; i++) {
        printf("%-4d  %-34s  %s\n", table->rows[i].id, table->rows[i].name, table->rows[i].email);
    }
}

static int save_table(const Table *table)
{
    FILE *file = fopen("database.csv", "w");
    int i;

    if (file == NULL) {
        return 0;
    }

    for (i = 0; i < table->count; i++) {
        fprintf(file, "%d,%s,%s\n", table->rows[i].id, table->rows[i].name, table->rows[i].email);
    }

    fclose(file);
    return 1;
}

int main(void)
{
    Table table;
    char command[20];

    table.count = 0;

    printf("Mini Database Engine\n");
    printf("Commands: insert, select, save, quit\n");

    for (;;) {
        printf("\ndb> ");
        if (fgets(command, sizeof command, stdin) == NULL) {
            break;
        }
        trim_newline(command);

        if (strcmp(command, "insert") == 0) {
            insert_row(&table);
        } else if (strcmp(command, "select") == 0) {
            select_all(&table);
        } else if (strcmp(command, "save") == 0) {
            printf("%s\n", save_table(&table) ? "Saved database.csv." : "Save failed.");
        } else if (strcmp(command, "quit") == 0) {
            break;
        } else {
            printf("Unknown command.\n");
        }
    }

    return 0;
}
