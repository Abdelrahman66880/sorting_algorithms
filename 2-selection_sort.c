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
int tmp;
tmp = *x;
*x = *y;
*y = tmp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
*/

void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t minIndex;

for (i = 0; i < (size - 1); i++)
{
minIndex = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[minIndex])
{
minIndex = j;
}
}
swap(&array[minIndex], &array[i]);
print_array(array, size);
}
}
