#include "sort.h"
#include <stdio.h>
/*
 * @bit: zero is up and 1 is down
 */
void bitonic_merge(int *array, size_t lo, size_t hi, size_t count, size_t bit, size_t size)
{
	size_t split;

	if (bit == 0)
		printf("Merging [%lu/%lu] (UP):\n", hi - lo + 1, size);
	else
		printf("Merging [%lu/%lu] (DOWN):\n", hi - lo + 1, size);
	
	print_array(array + lo, hi - lo + 1);

	split = (hi - lo) / 2 + 1;
	if (hi - lo + 1 > 2)
	{
		bitonic_merge(array, lo, split - 1, count, 0, size);
		bitonic_merge(array, split, hi, count, 1, size);
	}
	if (hi - lo + 1 == 2)
	{
		if (bit == 0)
		{
			if (array[lo] > array[hi])
			{
				array[lo] += array[hi];
				array[hi] = array[lo] - array[hi];
				array[lo] -= array[hi];
			}
		}
		else
		{
			if (array[lo] < array[hi])
			{
				array[lo] += array[hi];
				array[hi] = array[lo] - array[hi];
				array[lo] -= array[hi];
			}
		}
	}
}

/**
 * bitonic_sort - sorts the radix algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void bitonic_sort(int *array, size_t size)
{
	size_t k = 0, count = 0, bit = 0, lo, hi;

	for (k = size; k > 1;)
	{
		k /= 2;
		count++;
	}
	lo = 0;
	hi = size - 1;
	bitonic_merge(array, lo, hi, count, bit, size);
}
