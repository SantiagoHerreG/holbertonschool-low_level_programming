#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates a determined memory space in the heap
 * @b: number of bytes to allocate in memory
 * Return: Must return 0 on succes or exit with 98 status on failure
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
