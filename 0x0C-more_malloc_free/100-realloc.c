#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates amemory block using malloc and free
 * @ptr: pointer to a memory allocated previously
 * @old_size: size in bytes of ptr
 * @new_size: new size in bytes of the new memory block
 * Return: a pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *new;

	unsigned int i;

	new = (char *)ptr;

	if (old_size == new_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}

	else
	{
	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	if (new_size >= old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
	{
		a[i] = new[i];
	}
	free(ptr);
	return ((void *)a);
	}
}
