/*
 * Topic   : POSIX Threads (pthreads)
 * Module  : 16 - Multithreading Programming
 *
 * pthread_create starts a thread; pthread_join waits for it to finish.
 *
 * Build (Linux/macOS/WSL/MSYS2):
 *   gcc -pthread "02 POSIX-Threads.c" -o mt02
 *
 * MSVC does not include pthreads by default; use MinGW or WSL.
 */

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 3

typedef struct
{
    int id;
} ThreadArg;

void *worker(void *arg)
{
    ThreadArg *data = (ThreadArg *)arg;
    printf("Thread %d running\n", data->id);
    return NULL;
}

int main(void)
{
    pthread_t threads[NUM_THREADS];
    ThreadArg args[NUM_THREADS];
    int i;

    printf("=== POSIX Threads (pthreads) ===\n\n");

    for (i = 0; i < NUM_THREADS; i++)
    {
        args[i].id = i + 1;
        if (pthread_create(&threads[i], NULL, worker, &args[i]) != 0)
        {
            printf("pthread_create failed for thread %d\n", i + 1);
            return 1;
        }
    }

    for (i = 0; i < NUM_THREADS; i++)
        pthread_join(threads[i], NULL);

    printf("All threads joined. Main exits.\n");

    return 0;
}
