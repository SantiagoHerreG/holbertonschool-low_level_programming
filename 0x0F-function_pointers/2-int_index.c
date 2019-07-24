#include "function_pointers.h"

/**
 * int_index - returns the index where an element fits a condition of a funct
 * @array: array of int elements
 * @size: number of elements
 * @cmp: pointer to a function
 * Return: Index of first matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, b = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		b = cmp(array[i]);
		if (b == 1)
			return (i);
	}

	return (-1);
}
