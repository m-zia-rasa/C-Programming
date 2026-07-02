/*
 * Topic   : volatile Keyword
 * Module  : 18 - Advanced C Programming
 *
 * volatile tells the compiler: this value may change outside normal code flow
 * (hardware register, interrupt, another thread), so do not optimize away reads.
 *
 * Compile: gcc "03 Volatile-keyword.c" -o adv03
 */

#include <stdio.h>

/* Simulated hardware status register */
static volatile int device_status = 0;

void device_set_ready(void)
{
    device_status = 1;
}

int main(void)
{
    int reads = 0;
    int limit = 5;

    printf("=== volatile Keyword ===\n\n");
    printf("Polling simulated device_status...\n");

    while (reads < limit)
    {
        if (device_status == 1)
        {
            printf("Device ready detected on read #%d\n", reads + 1);
            break;
        }
        reads++;
        if (reads == 3)
            device_set_ready();
    }

    printf("\nWithout volatile, an optimizing compiler might cache\n");
    printf("device_status in a register and miss the update.\n");

    return 0;
}
