/*
 * Project : Chat Application
 * Level   : Advanced
 *
 * A local console chat simulator. It focuses on message structures, timestamps,
 * dynamic input flow, and saving chat history. Networked chat can be built later
 * by replacing add_message() calls with socket send/receive operations.
 *
 * Build:
 *   cl /W4 /Fe:chat.exe Chat-Application.c
 */

#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_MESSAGES 50
#define NAME_SIZE 30
#define MESSAGE_SIZE 160

typedef struct {
    char sender[NAME_SIZE];
    char text[MESSAGE_SIZE];
    char time_text[32];
} Message;

static void trim_newline(char text[])
{
    size_t length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
}

static void current_time_text(char destination[], size_t size)
{
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    if (local == NULL || strftime(destination, size, "%H:%M:%S", local) == 0) {
        strncpy(destination, "unknown", size);
        destination[size - 1] = '\0';
    }
}

static int save_history(const Message messages[], int count)
{
    FILE *file = fopen("chat-history.txt", "w");
    int i;

    if (file == NULL) {
        return 0;
    }

    for (i = 0; i < count; i++) {
        fprintf(file, "[%s] %s: %s\n", messages[i].time_text, messages[i].sender, messages[i].text);
    }

    fclose(file);
    return 1;
}

int main(void)
{
    Message messages[MAX_MESSAGES];
    char sender[NAME_SIZE];
    char text[MESSAGE_SIZE];
    int count = 0;
    int i;

    printf("Local Chat Application\n");
    printf("Type /quit as the message to finish.\n\n");

    while (count < MAX_MESSAGES) {
        printf("Sender: ");
        if (fgets(sender, sizeof sender, stdin) == NULL) {
            break;
        }
        trim_newline(sender);

        printf("Message: ");
        if (fgets(text, sizeof text, stdin) == NULL) {
            break;
        }
        trim_newline(text);

        if (strcmp(text, "/quit") == 0) {
            break;
        }

        strncpy(messages[count].sender, sender, sizeof messages[count].sender);
        messages[count].sender[sizeof messages[count].sender - 1] = '\0';
        strncpy(messages[count].text, text, sizeof messages[count].text);
        messages[count].text[sizeof messages[count].text - 1] = '\0';
        current_time_text(messages[count].time_text, sizeof messages[count].time_text);
        count++;
    }

    printf("\nConversation\n");
    for (i = 0; i < count; i++) {
        printf("[%s] %s: %s\n", messages[i].time_text, messages[i].sender, messages[i].text);
    }

    printf("%s\n", save_history(messages, count) ? "Saved chat-history.txt." : "Could not save chat history.");
    return 0;
}
