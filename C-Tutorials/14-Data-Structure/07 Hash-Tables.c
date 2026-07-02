/*
 * Topic   : Hash Tables
 * Module  : 14 - Data Structures
 *
 * Maps keys to array indices using a hash function.
 * This lesson uses chaining: each slot is a linked list of collisions.
 *
 * Compile: gcc "07 Hash-Tables.c" -o ds07
 */

#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 7

typedef struct HashNode
{
    int key;
    int value;
    struct HashNode *next;
} HashNode;

typedef struct
{
    HashNode *buckets[TABLE_SIZE];
} HashTable;

unsigned int hash_key(int key)
{
    int mod = key % TABLE_SIZE;
    return mod < 0 ? (unsigned)(mod + TABLE_SIZE) : (unsigned)mod;
}

void ht_insert(HashTable *ht, int key, int value)
{
    unsigned int index = hash_key(key);
    HashNode *node = malloc(sizeof(HashNode));

    if (node == NULL)
        return;

    node->key = key;
    node->value = value;
    node->next = ht->buckets[index];
    ht->buckets[index] = node;
}

int ht_get(const HashTable *ht, int key, int *value)
{
    unsigned int index = hash_key(key);
    HashNode *current = ht->buckets[index];

    while (current != NULL)
    {
        if (current->key == key)
        {
            *value = current->value;
            return 1;
        }
        current = current->next;
    }
    return 0;
}

void ht_free(HashTable *ht)
{
    int i;
    HashNode *node;
    HashNode *next;

    for (i = 0; i < TABLE_SIZE; i++)
    {
        node = ht->buckets[i];
        while (node != NULL)
        {
            next = node->next;
            free(node);
            node = next;
        }
        ht->buckets[i] = NULL;
    }
}

int main(void)
{
    HashTable ht = {0};
    int value;

    printf("=== Hash Tables ===\n\n");

    ht_insert(&ht, 10, 100);
    ht_insert(&ht, 17, 170); /* may collide with 10 when TABLE_SIZE=7 */
    ht_insert(&ht, 3, 30);

    if (ht_get(&ht, 17, &value))
        printf("Key 17 => value %d\n", value);
    if (ht_get(&ht, 99, &value))
        printf("Key 99 found\n");
    else
        printf("Key 99 not found\n");

    ht_free(&ht);

    return 0;
}
