/*
 * Project : Memory Allocator
 * Level   : Advanced
 *
 * A fixed-size block allocator. It is intentionally small so students can see
 * how a free list works without needing operating-system memory management.
 *
 * Build:
 *   cl /W4 /Fe:allocator.exe Memory-Allocator.c
 */

#include <stdio.h>
#include <stddef.h>

#define BLOCK_SIZE 32
#define BLOCK_COUNT 8

typedef struct FreeBlock {
    struct FreeBlock *next;
} FreeBlock;

static unsigned char memory_pool[BLOCK_COUNT][BLOCK_SIZE];
static FreeBlock *free_list = NULL;

static void allocator_init(void)
{
    int i;

    free_list = NULL;
    for (i = 0; i < BLOCK_COUNT; i++) {
        FreeBlock *block = (FreeBlock *)memory_pool[i];
        block->next = free_list;
        free_list = block;
    }
}

static void *pool_alloc(void)
{
    FreeBlock *block;

    if (free_list == NULL) {
        return NULL;
    }

    block = free_list;
    free_list = free_list->next;
    return block;
}

static void pool_free(void *pointer)
{
    FreeBlock *block;

    if (pointer == NULL) {
        return;
    }

    block = (FreeBlock *)pointer;
    block->next = free_list;
    free_list = block;
}

static int free_block_count(void)
{
    int count = 0;
    FreeBlock *current = free_list;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

int main(void)
{
    void *first;
    void *second;

    allocator_init();
    printf("Free blocks after init: %d\n", free_block_count());

    first = pool_alloc();
    second = pool_alloc();
    printf("Allocated first : %p\n", first);
    printf("Allocated second: %p\n", second);
    printf("Free blocks now : %d\n", free_block_count());

    pool_free(first);
    pool_free(second);
    printf("Free blocks after free: %d\n", free_block_count());

    return 0;
}
