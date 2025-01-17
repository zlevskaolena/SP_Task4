#ifndef SORT
#define SORT
#include "stringProcessor.h"

void swap(char** a, char** b)
{
    char* temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(char** arr, size_t length)
{
    if (length < 2) return;
    char* pivot = arr[length / 2];
    size_t i = 0, j = length - 1;
    while (i <= j)
    {
        while (strcmp(arr[i], pivot) < 0) i++;
        while (strcmp(arr[j], pivot) > 0) j--;
        if (i <= j)
        {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    if (j > 0) quick_sort(arr, j + 1);
    if (i < length) quick_sort(&arr[i], length - i);
}
#endif // !SORT