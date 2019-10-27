#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm used
 *
 * @array: pointer to an unordered array of integer
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size <= 0)
		return;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			if (array[j] > array[j + 1] && (j + 1 < size))
			{
				array[j] += array[j + 1];
				array[j + 1] = array[j] - array[j + 1];
				array[j] -= array[j + 1];
				print_array(array, size);
			}
}
