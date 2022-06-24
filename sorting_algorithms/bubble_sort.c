#include <stdio.h>

int *bubble_sort(int *arr, int size)
{
    int i;
    int j;
    int temp;
    int swapped;

    i = 0;
    j = size - 1;
    while (j >= 0)
    {
        swapped =0;
        i = 0;
        while (i <= j)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            } 
            i++;
        }
        if (!swapped)
            break ;
        j--;
    }
    return (arr);
}
