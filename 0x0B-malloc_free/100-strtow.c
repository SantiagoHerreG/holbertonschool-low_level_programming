#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of pointers
 */
char **strtow(char *str)
{
	int i = 0, k = 0, z = 0, x = 0, y = 0;

	char **a;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ' && str[i] != 0 && (str[i + 1] == ' ' || str[i + 1] == 0))
			z++;
	}
	a = malloc(sizeof(char *) * z);
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		while (str[i] != ' ' && str[i] != 0)
		{
			y++;
			i++;
		}
		if (y != 0)
		{
		a[x] = malloc((y + 1) * sizeof(char));
		if (a[x] == NULL)
			return (NULL);
			for (; str[i - y] != ' ' && str[i - y] != 0; y--)
			{
				a[x][k] = str[i - y];
				k++;
			}
		a[x][k] = 0;
		x++;
		}
		y = 0;
		k = 0;
	}
	a[x] = NULL;
	return (a);
}
