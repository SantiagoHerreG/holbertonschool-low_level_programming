#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: list of elements
 * @size: number of elements
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		temp = i;
		for (j = i; j < size; j++)
			if (array[j] < array[temp])
				temp = j;
		if (temp != i)
		{
			array[temp] += array[i];
			array[i] = array[temp] - array[i];
			array[temp] -= array[i];
			print_array(array, size);
		}
	}
}
