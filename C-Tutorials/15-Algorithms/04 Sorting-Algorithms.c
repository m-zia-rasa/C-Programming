/*
 * Topic   : Sorting Algorithms
 * Module  : 15 - Algorithms
 *
 * Bubble sort: compare neighbors, swap — O(n^2)
 * Selection sort: pick smallest for each position — O(n^2)
 *
 * Compile: gcc "04 Sorting-Algorithms.c" -o algo04
 */

#include <stdio.h>

void print_array(const int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubble_sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void selection_sort(int *arr, int n)
{
    int i, j, min_index, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(void)
{
    int data1[] = {64, 25, 12, 22, 11};
    int data2[] = {64, 25, 12, 22, 11};
    const int n = 5;

    printf("=== Sorting Algorithms ===\n\n");

    printf("Original: ");
    print_array(data1, n);

    bubble_sort(data1, n);
    printf("Bubble sort: ");
    print_array(data1, n);

    selection_sort(data2, n);
    printf("Selection sort: ");
    print_array(data2, n);

    return 0;
}
