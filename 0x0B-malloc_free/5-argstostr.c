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
	int i = 0, k = 0, z = 0;

	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (k = 0; (*av)[k] != 0; k++)
		{
			if (av[i][0] != 0)
			z++;
		}
	}
	a = malloc(sizeof(char) * z);

	if (a == NULL)
		return (NULL);
	z = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != 0; k++)
		{
			a[z] = av[i][k];
			z++;
		}
		if (av[i][0] != 0)
		{
			a[z] = '\n';
			z++;
		}
	}
	a[z] = '\0';
	return (a);
}
