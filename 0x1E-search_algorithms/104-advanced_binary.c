#include "search_algos.h"

/**
 * binary_recursion - uses the recursion to performe the binary search
 * @array: array of integers to be traversed
 * @li: the lowest index
 * @hi: highest index
 * @value: value to be searched for
 * Return: integer, index found
 */
int binary_recursion(int *array, size_t li, size_t hi, int value)
{
	size_t i;

	printf("Searching in array: %d", array[li]);
	for (i = li + 1; i <= hi; i++)
		printf(", %d", array[i]);
	printf("\n");

	i = (hi - li) / 2 + li;
	if (array[li] == value && array[hi] == value)
		return (li);

	if (array[i] == value)
	{
		if (i == 0 || array[i - 1] != value)
			return (i);
		else
			return (binary_recursion(array, li, i - 1, value));
	}
	else if (hi - li == 0)
		return (-1);
	else if (array[i] > value)
		return (binary_recursion(array, li, i - 1, value));
	else
		return (binary_recursion(array, i + 1, hi, value));
}

/**
 * advanced_binary - traverse an array and returns the searched value and index
 * @array: array of integers to be traversed
 * @size: size of the array
 * @value: value to be searched for
 * Return: integer, index found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recursion(array, 0, size - 1, value));
}
