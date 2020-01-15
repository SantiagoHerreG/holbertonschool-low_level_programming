#include "search_algos.h"
/**
 * interpolation_search - searches using the Interpolation search algorithm
 *
 * @array: array of integers to be traversed
 * @size: size of the array
 * @value: value to be searched for
 * Return: integer, index found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0, high = size - 1;

	pos = (size_t) (low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low])));

	while (1)
	{
		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			if (pos == 0 || array[pos - 1] != value)
				return (pos);

			high = pos - 1;
		}
		else if (low == high)
			return (-1);
		else if (array[pos] > value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = (size_t) (low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low])));
	}
}
