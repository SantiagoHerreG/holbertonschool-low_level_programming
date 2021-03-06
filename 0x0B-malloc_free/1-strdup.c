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

	if (str == 0)
		return (NULL);

	i = 0;
	while (str[i] != 0)
		i++;

	a = (char *) malloc(i * sizeof(char) + 1);

	if (a == NULL)
		return (NULL);

	k = 0;
	while (str[k] != 0)
	{
		a[k] = str[k];
		k++;
	}
	a[k] = 0;
	return (a);
}
