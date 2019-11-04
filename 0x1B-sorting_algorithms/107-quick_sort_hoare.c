#include "sort.h"
/**
 * partition - function that swaps values selectively
 * according to Hoare's scheme
 * @array: array to be sorted
 * @lo: lower value of the current range
 * @hi: higher value in the range
 * @size: absolute size of the arrya
 * Return: the partition index for a new recursive sorting
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot;
	size_t i, j;

	pivot = array[hi];
	i = lo;
	j = hi;

	while (1)
	{
		while (i < size - 1 && array[i] < pivot)
			i++;
		while (j > 0 && array[j] > pivot)
			j--;

		if (i == j)
			return (i - 1);
		else if (i > j || i == size)
			return (j);

		array[i] += array[j];
		array[j] = array[i] - array[j];
		array[i] -= array[j];
		print_array(array, size);
		i++;
		j--;
	}
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
			quick_recursion(array, lo, p_idx, size);
		if (p_idx < hi)
			quick_recursion(array, p_idx + 1, hi, size);
	}
}

/**
 * quick_sort_hoare - sorts an array by using hoare's partition scheme
 * @array: array of numbers
 * @size: size of the entire array
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	size_t hi, lo;

	if (!array || size <= 1)
		return;

	hi = size - 1;
	lo = 0;
	quick_recursion(array, lo, hi, size);
}
