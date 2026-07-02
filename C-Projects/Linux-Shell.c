/*
 * Project : Linux Shell
 * Level   : Advanced
 *
 * A teaching shell with built-in commands and a system() fallback.
 * On Linux it can run common shell commands; on Windows it demonstrates the
 * same command-loop idea through the platform command processor.
 *
 * Build:
 *   cl /W4 /Fe:mini-shell.exe Linux-Shell.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 256

static void trim_newline(char text[])
{
    size_t length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
}

int main(void)
{
    char line[LINE_SIZE];

    printf("Mini Shell\n");
    printf("Built-ins: help, clear, exit\n");

    for (;;) {
        printf("csh> ");
        if (fgets(line, sizeof line, stdin) == NULL) {
            break;
        }
        trim_newline(line);

        if (line[0] == '\0') {
            continue;
        }
        if (strcmp(line, "exit") == 0) {
            break;
        }
        if (strcmp(line, "help") == 0) {
            printf("Type an operating-system command, or use exit to quit.\n");
            continue;
        }
        if (strcmp(line, "clear") == 0) {
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            continue;
        }

        if (system(line) != 0) {
            printf("Command failed or was not found.\n");
        }
    }

    return 0;
}
