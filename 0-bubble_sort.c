#include "sort.h"

/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
*/

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int *array, size_t size)
{
    size_t i;
    size_t j;


    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                print_array(array, size);
            }
        }
    }
}
