/*
 * Topic   : Linked Lists
 * Module  : 14 - Data Structures
 *
 * A singly linked list: each node stores data and a pointer to the next node.
 * Head pointer points to the first node; last node points to NULL.
 *
 * Compile: gcc "01 Linked-Lists.c" -o ds01
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *list_append(Node *head, int value)
{
    Node *new_node = malloc(sizeof(Node));
    Node *current;

    if (new_node == NULL)
        return head;

    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
        return new_node;

    current = head;
    while (current->next != NULL)
        current = current->next;
    current->next = new_node;

    return head;
}

void list_print(const Node *head)
{
    const Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void list_free(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    Node *head = NULL;

    printf("=== Linked Lists ===\n\n");

    head = list_append(head, 10);
    head = list_append(head, 20);
    head = list_append(head, 30);

    list_print(head);
    list_free(head);

    return 0;
}
