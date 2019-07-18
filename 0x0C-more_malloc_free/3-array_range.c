#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first number to initialize
 * @max: last number to initialize
 * Return: The pinter to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, i, k = 0;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	i = min;

	for ( ; i <= max; i++, k++)
		a[k] = i;

	return (a);
}
