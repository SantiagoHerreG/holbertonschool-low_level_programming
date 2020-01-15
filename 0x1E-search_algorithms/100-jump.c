#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches using the Jump search algorithm
 *
 * @array: array of integers to be traversed
 * @size: size of the array
 * @value: value to be searched for
 * Return: integer, index found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, m;

	m = (size_t)sqrt(size);

	if (!array)
		return (-1);
	i = 0;
	while (i * m < size)
	{
		if (array[i * m] >= value)
			break;
		printf("Value checked array[%li] = [%d]\n", i * m, array[i * m]);
		i++;
	}

	printf("Value found between indexes [%li] and [%li]\n", (i - 1) * m, i * m);

	for (j = (i - 1) * m; j <= i * m && j < size; j++)
	{
		printf("Value checked array[%li] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
