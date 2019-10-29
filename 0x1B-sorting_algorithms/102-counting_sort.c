#include "sort.h"
/**
 * counting_sort - sorts using the counting algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int idx, max = 0;
	int *new_array, *output;

	if (size <= 1)
		return;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];

	new_array = malloc(sizeof(int) * max + 1);
	if (!new_array)
		return;
	for (idx = 0; idx <= max; idx++)
		new_array[idx] = 0;

	for (i = 0; i < size; i++)
		new_array[array[i]] += 1;

	for (idx = 1; idx <= max; idx++)
		new_array[idx] += new_array[idx - 1];

	print_array(new_array, max + 1);

	output = malloc(sizeof(int) * size);
	if (!output)
		return;
	for (i = 0; i < size; i++)
		output[new_array[array[i]] - 1] = array[i];
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(new_array);
}
