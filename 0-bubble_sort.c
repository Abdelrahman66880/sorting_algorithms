#include "sort.h"

/**
 * swap - the values of two integer variables.
 *
 * This function takes two integer pointers, x and y, and swaps the values
 * stored at the memory locations pointed to by these pointers.
 *
 * @x: Pointer to the first integer variable.
 * @y: Pointer to the second integer variable.
*/

void swap(int *x, int *y)
{
int tmp = *x;
*x = *y;
*y = tmp;
}

/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
*/


void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;


for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
}
}
}
