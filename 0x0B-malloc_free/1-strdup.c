#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the memory allocating a string
 * @str: string as a parameter
 * Return: pointer to the memory allocation of the string
 */

char *_strdup(char *str)
{
	char *a;

	int i, k;

	if (str[0] == 0)
		return (NULL);

	i = 0;
	while (str[i] != 0)
		i++;

	a = malloc(i);

	k = 0;
	while (k <= i)
	{
		a[k] = str[k];
		k++;
	}
	return (a);
}
