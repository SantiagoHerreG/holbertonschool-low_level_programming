#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array like calloc function
 * @nmemb: number of elements of the array
 * @size: size of the data
 * Return: pointer to the new allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *a;

	if (nmemb * size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
