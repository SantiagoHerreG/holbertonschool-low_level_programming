#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function that concatenates all arguments of the program
 * @ac: number of arguments
 * @av: pointer to an array of strings
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, k = 0, z = 0, b = 0;

	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != 0; k++)
			z++;
		z++;
	}
	a = malloc(sizeof(char) * z + 1);

	if (a == NULL)
		return (NULL);
	b = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != 0; k++)
		{
			a[b] = av[i][k];
			b++;
		}
		a[b] = '\n';
		b++;
	}
	a[b] = '\0';
	return (a);
}
