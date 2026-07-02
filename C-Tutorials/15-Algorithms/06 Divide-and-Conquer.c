/*
 * Topic   : Divide and Conquer
 * Module  : 15 - Algorithms
 *
 * Strategy:
 *   1. Divide problem into smaller parts
 *   2. Conquer each part recursively
 *   3. Combine results
 *
 * Examples: merge sort, quicksort, binary search, merge step below.
 *
 * Compile: gcc "06 Divide-and-Conquer.c" -o algo06
 */

#include <stdio.h>

void merge(int *arr, int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[32], R[32];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void merge_sort(int *arr, int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(void)
{
    int data[] = {38, 27, 43, 3, 9, 82, 10};
    int n = (int)(sizeof data / sizeof data[0]);
    int i;

    printf("=== Divide and Conquer ===\n\n");
    printf("Merge sort (divide, sort halves, merge):\n");
    printf("Before: ");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    printf("\n");

    merge_sort(data, 0, n - 1);

    printf("After : ");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}
