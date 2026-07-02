/*
 * Topic   : Stacks
 * Module  : 14 - Data Structures
 *
 * LIFO: Last In, First Out. Operations: push, pop, peek.
 * Array implementation with a top index.
 *
 * Compile: gcc "02 Stacks.c" -o ds02
 */

#include <stdio.h>

#define STACK_MAX 10

typedef struct
{
    int items[STACK_MAX];
    int top;
} Stack;

void stack_init(Stack *s)
{
    s->top = -1;
}

int stack_push(Stack *s, int value)
{
    if (s->top >= STACK_MAX - 1)
        return 0;
    s->items[++s->top] = value;
    return 1;
}

int stack_pop(Stack *s, int *value)
{
    if (s->top < 0)
        return 0;
    *value = s->items[s->top--];
    return 1;
}

int main(void)
{
    Stack s;
    int value;

    printf("=== Stacks ===\n\n");
    stack_init(&s);

    stack_push(&s, 100);
    stack_push(&s, 200);
    stack_push(&s, 300);

    printf("Pop order (LIFO):\n");
    while (stack_pop(&s, &value))
        printf("  %d\n", value);

    return 0;
}
