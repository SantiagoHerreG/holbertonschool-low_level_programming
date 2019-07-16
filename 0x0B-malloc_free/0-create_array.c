#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: size of the memory to allocate
 * @c: character to initialize
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i;

	if (!size)
		return (NULL);

	a = malloc(size);

	if (a == NULL)
	return (NULL);

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
