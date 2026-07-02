/*
 * Topic   : Signals
 * Module  : 16 - Multithreading Programming
 *
 * Signals are software interrupts (SIGINT, SIGTERM, etc.).
 * Handlers run asynchronously when a signal arrives.
 *
 * Build:
 *   gcc "05 Signals.c" -o mt05
 *
 * Test: run program, press Ctrl+C to trigger SIGINT handler.
 */

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

static volatile sig_atomic_t stop_requested = 0;

void handle_sigint(int signo)
{
    (void)signo;
    stop_requested = 1;
    printf("\nSIGINT caught. Preparing to exit safely...\n");
}

int main(void)
{
    int tick = 0;

    printf("=== Signals ===\n\n");
    printf("Press Ctrl+C to send SIGINT to this program.\n\n");

    signal(SIGINT, handle_sigint);

    while (!stop_requested && tick < 30)
    {
        printf("Working... tick=%d\r", tick++);
        fflush(stdout);
    }

    printf("\nProgram finished.\n");

    return 0;
}
