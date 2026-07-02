/*
 * Topic   : Queues
 * Module  : 14 - Data Structures
 *
 * FIFO: First In, First Out. Operations: enqueue, dequeue.
 * Array implementation with front and rear indices.
 *
 * Compile: gcc "03 Queues.c" -o ds03
 */

#include <stdio.h>

#define QUEUE_MAX 10

typedef struct
{
    int items[QUEUE_MAX];
    int front;
    int rear;
    int count;
} Queue;

void queue_init(Queue *q)
{
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

int queue_enqueue(Queue *q, int value)
{
    if (q->count >= QUEUE_MAX)
        return 0;
    q->rear = (q->rear + 1) % QUEUE_MAX;
    q->items[q->rear] = value;
    q->count++;
    return 1;
}

int queue_dequeue(Queue *q, int *value)
{
    if (q->count == 0)
        return 0;
    *value = q->items[q->front];
    q->front = (q->front + 1) % QUEUE_MAX;
    q->count--;
    return 1;
}

int main(void)
{
    Queue q;
    int value;

    printf("=== Queues ===\n\n");
    queue_init(&q);

    queue_enqueue(&q, 10);
    queue_enqueue(&q, 20);
    queue_enqueue(&q, 30);

    printf("Dequeue order (FIFO):\n");
    while (queue_dequeue(&q, &value))
        printf("  %d\n", value);

    return 0;
}
