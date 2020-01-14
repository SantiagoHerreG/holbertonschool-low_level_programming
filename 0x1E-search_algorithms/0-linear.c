#include "search_algos.h"

/**
 * linear_search - traverse an array and returns the searched value and index
 * @array: array of integers to be traversed
 * @size: size of the array
 * @value: value to be searched for
 * Return: integer, index found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
