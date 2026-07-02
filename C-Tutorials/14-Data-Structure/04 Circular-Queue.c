/*
 * Topic   : Circular Queue
 * Module  : 14 - Data Structures
 *
 * Fixed-size queue where front/rear wrap using modulo arithmetic.
 * Efficient reuse of array slots.
 *
 * Compile: gcc "04 Circular-Queue.c" -o ds04
 */

#include <stdio.h>

#define CQ_SIZE 5

typedef struct
{
    int items[CQ_SIZE];
    int front;
    int rear;
    int count;
} CircularQueue;

void cq_init(CircularQueue *q)
{
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

int cq_enqueue(CircularQueue *q, int value)
{
    if (q->count >= CQ_SIZE)
        return 0;
    q->rear = (q->rear + 1) % CQ_SIZE;
    q->items[q->rear] = value;
    q->count++;
    return 1;
}

int cq_dequeue(CircularQueue *q, int *value)
{
    if (q->count == 0)
        return 0;
    *value = q->items[q->front];
    q->front = (q->front + 1) % CQ_SIZE;
    q->count--;
    return 1;
}

int main(void)
{
    CircularQueue q;
    int value;
    int i;

    printf("=== Circular Queue ===\n\n");
    cq_init(&q);

    for (i = 1; i <= 5; i++)
        cq_enqueue(&q, i * 10);

    printf("Queue full? next enqueue fails: %s\n",
           cq_enqueue(&q, 99) ? "no" : "yes");

    printf("Dequeue all:\n");
    while (cq_dequeue(&q, &value))
        printf("  %d\n", value);

    printf("Enqueue after dequeue reuses slots: ");
    cq_enqueue(&q, 99);
    cq_dequeue(&q, &value);
    printf("%d\n", value);

    return 0;
}
