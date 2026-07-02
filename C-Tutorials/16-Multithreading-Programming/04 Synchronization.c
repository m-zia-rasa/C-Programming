/*
 * Topic   : Synchronization
 * Module  : 16 - Multithreading Programming
 *
 * Mutex + condition variable coordinate threads (producer/consumer pattern).
 *
 * Build:
 *   gcc -pthread "04 Synchronization.c" -o mt04
 */

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t data_ready = PTHREAD_COND_INITIALIZER;

int produced_value = 0;
int consumed = 0;

void *producer(void *arg)
{
    (void)arg;
    pthread_mutex_lock(&mtx);
    produced_value = 42;
    pthread_cond_signal(&data_ready);
    pthread_mutex_unlock(&mtx);
    printf("Producer: value ready\n");
    return NULL;
}

void *consumer(void *arg)
{
    (void)arg;
    pthread_mutex_lock(&mtx);
    while (!consumed && produced_value == 0)
        pthread_cond_wait(&data_ready, &mtx);
    if (produced_value != 0)
    {
        printf("Consumer: received %d\n", produced_value);
        consumed = 1;
    }
    pthread_mutex_unlock(&mtx);
    return NULL;
}

int main(void)
{
    pthread_t prod, cons;

    printf("=== Synchronization ===\n\n");

    if (pthread_create(&cons, NULL, consumer, NULL) != 0)
    {
        printf("Could not create consumer thread.\n");
        return 1;
    }

    if (pthread_create(&prod, NULL, producer, NULL) != 0)
    {
        printf("Could not create producer thread.\n");
        pthread_join(cons, NULL);
        return 1;
    }

    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    pthread_mutex_destroy(&mtx);
    pthread_cond_destroy(&data_ready);

    return 0;
}
