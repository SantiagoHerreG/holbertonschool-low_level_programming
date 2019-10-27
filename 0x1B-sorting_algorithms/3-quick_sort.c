#include "sort.h"

/**
 * partition - evaluates the array and organizes it in subarrays
 *
 * @array: list of elements
 * @size: number of elements
 * @lo: lower limit of the subarray
 * @hi: higer limit of the subarray
 * Return: the final position of the pivot / the partition for next subset
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot;
	size_t i, j;

	pivot = array[hi];
	i = lo;

	for (j = lo; j <= hi; j++)
	{
		if (array[j] < pivot && array[j] != array[i])
		{
			array[j] += array[i];
			array[i] = array[j] - array[i];
			array[j] -= array[i];
			print_array(array, size);
			i++;
		}
		else if (array[j] < pivot)
			i++;
	}
	if (array[hi] != array[i])
	{
		array[hi] += array[i];
		array[i] = array[hi] - array[i];
		array[hi] -= array[i];
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_recursion - main recursion of the algorithm, recursively
 * checks the subarrays
 *
 * @array: list of elements
 * @size: number of elements
 * @lo: lower limit of the subarray
 * @hi: higer limit of the subarray
 * Return: void
 */
void quick_recursion(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p_idx;

	if (lo < hi)
	{
		p_idx = partition(array, lo, hi, size);
		if (p_idx > lo)
			quick_recursion(array, lo, p_idx - 1, size);
		if (p_idx < hi)
			quick_recursion(array, p_idx + 1, hi, size);
	}
}

/**
 * quick_sort - Function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: list of elements
 * @size: number of elements
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t hi, lo;

	if (size <= 1)
		return;

	hi = size - 1;
	lo = 0;
	quick_recursion(array, lo, hi, size);
}
