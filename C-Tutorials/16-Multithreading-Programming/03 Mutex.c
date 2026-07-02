/*
 * Topic   : Mutex
 * Module  : 16 - Multithreading Programming
 *
 * pthread_mutex_t provides mutual exclusion: only one thread owns the lock.
 *
 * Build:
 *   gcc -pthread "03 Mutex.c" -o mt03
 */

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4
#define INCREMENTS_PER_THREAD 25000

pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;

void *increment_worker(void *arg)
{
    int i;
    (void)arg;

    for (i = 0; i < INCREMENTS_PER_THREAD; i++)
    {
        pthread_mutex_lock(&counter_mutex);
        shared_counter++;
        pthread_mutex_unlock(&counter_mutex);
    }

    return NULL;
}

int main(void)
{
    pthread_t threads[NUM_THREADS];
    int i;
    int expected = NUM_THREADS * INCREMENTS_PER_THREAD;

    printf("=== Mutex ===\n\n");

    for (i = 0; i < NUM_THREADS; i++)
    {
        if (pthread_create(&threads[i], NULL, increment_worker, NULL) != 0)
        {
            printf("pthread_create failed for thread %d\n", i + 1);
            return 1;
        }
    }

    for (i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], NULL);
    }

    printf("Expected counter = %d\n", expected);
    printf("Actual counter   = %d\n", shared_counter);

    pthread_mutex_destroy(&counter_mutex);

    return 0;
}
