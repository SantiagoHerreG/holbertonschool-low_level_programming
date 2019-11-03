#include "sort.h"
#include <stdio.h>
/**
 * bitonic_merge - sorts an array of 2^k numbers by using bitonic recursion
 * @array: array of numbers
 * @lo: lower index of the partial range
 * @hi: higher index of the partial range
 * @size: size of the entire array
 * @bit: 0 is up and 1 is down
 */
void bitonic_merge(int *array, size_t lo, size_t hi, size_t bit, size_t size)
{
	size_t split, i, k;

	if (bit == 0)
		printf("Merging [%lu/%lu] (UP):\n", hi - lo + 1, size);
	else
		printf("Merging [%lu/%lu] (DOWN):\n", hi - lo + 1, size);
	print_array(array + lo, hi - lo + 1);
	split = (hi - lo) / 2 + 1 + lo;
	if (hi - lo + 1 > 2)
	{
		bitonic_merge(array, lo, split - 1, 0, size);
		bitonic_merge(array, split, hi, 1, size);
	}
	i = (hi - lo) / 2 + 1;
	while (i)
	{
		k = 0;
		for ( ; bit == 0 && lo + i + k <= hi ; k++)
			if (array[lo + k] > array[lo + i + k])
			{
				array[lo + k] += array[lo + i + k];
				array[lo + i + k] = array[lo + k] - array[lo + i + k];
				array[lo + k] -= array[lo + i + k];
			}
		for ( ; bit == 1 && lo + i + k <= hi ; k++)
			if (array[lo + k] < array[lo + i + k])
			{
				array[lo + k] += array[lo + i + k];
				array[lo + i + k] = array[lo + k] - array[lo + i +  k];
				array[lo + k] -= array[lo + i + k];
			}
		i /= 2;
	}
	if (bit == 0)
		printf("Result [%lu/%lu] (UP):\n", hi - lo + 1, size);
	else
		printf("Result [%lu/%lu] (DOWN):\n", hi - lo + 1, size);
	print_array(array + lo, hi - lo + 1);
}

/**
 * bitonic_sort - sorts by using th bitonic algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void bitonic_sort(int *array, size_t size)
{
	size_t bit = 0, lo, hi;

	lo = 0;
	hi = size - 1;
	bitonic_merge(array, lo, hi, bit, size);
}
