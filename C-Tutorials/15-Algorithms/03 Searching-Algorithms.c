/*
 * Topic   : Searching Algorithms
 * Module  : 15 - Algorithms
 *
 * Linear search: check every element — O(n)
 * Binary search: sorted array, halve each step — O(log n)
 *
 * Compile: gcc "03 Searching-Algorithms.c" -o algo03
 */

#include <stdio.h>

int linear_search(const int *arr, int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binary_search(const int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int unsorted[] = {4, 2, 7, 1, 9};
    int sorted[] = {1, 2, 4, 7, 9};
    int key = 7;
    int index;

    printf("=== Searching Algorithms ===\n\n");

    index = linear_search(unsorted, 5, key);
    printf("Linear search for %d: index %d\n", key, index);

    index = binary_search(sorted, 5, key);
    printf("Binary search for %d in sorted array: index %d\n", key, index);

    index = binary_search(sorted, 5, 99);
    printf("Binary search for 99: index %d (not found)\n", index);

    return 0;
}
