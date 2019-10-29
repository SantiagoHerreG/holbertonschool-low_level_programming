#include "sort.h"
#include <stdio.h>
/**
 * merge_recursion - sorts using the merge algorithm
 *
 * @array: array of integers to be sorted
 * @sorted_ar: malloc'ed copy of the array
 * @lo: lower limit for subsets
 * @hi: higher limit for subsets
 * Return: void
 */
void merge_recursion(int *sorted_ar, size_t lo, size_t hi, int *array)
{
	size_t split, i, j;

	split = (hi + 1 - lo) / 2 + lo;

	if (split != lo)
	{
		if (split - 1 - lo > 0)
			merge_recursion(sorted_ar, lo, split - 1, sorted_ar);

		if (hi - split > 0)
			merge_recursion(sorted_ar, split, hi, sorted_ar);
	}
	printf("Merging...\n");
	printf("[left]: ");
	print_array(sorted_ar + lo, split - lo);
	printf("[right]: ");
	print_array(sorted_ar + split, hi - split + 1);

	for (j = split; j <= hi; j++)
	{
		i = j;
		while (i - 1 >= lo)
		{
			if (sorted_ar[i] < sorted_ar[i - 1])
			{
				sorted_ar[i - 1] += sorted_ar[i];
				sorted_ar[i] = sorted_ar[i - 1] - sorted_ar[i];
				sorted_ar[i - 1] -= sorted_ar[i];
				i--;
				continue;
			}
			break;
		}
	}
	for (i = lo; i <= hi; i++)
		array[i] = sorted_ar[i];
	printf("[Done]: ");
	print_array(sorted_ar + lo, hi - lo + 1);
}

/**
 * merge_sort - sorts using the counting algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *sorted_array;
	size_t i;

	if (!array || size <= 1)
		return;

	sorted_array = malloc(sizeof(int) * size);
	if (!sorted_array)
		return;
	for (i = 0; i < size; i++)
		sorted_array[i] = array[i];

	merge_recursion(sorted_array, 0, size - 1, array);
	free(sorted_array);
}
