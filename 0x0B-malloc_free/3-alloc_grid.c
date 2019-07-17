#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to an array of pointers
 */

int **alloc_grid(int width, int height)
{
	int **a, i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
		free(a);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
	}
	return (a);
}
