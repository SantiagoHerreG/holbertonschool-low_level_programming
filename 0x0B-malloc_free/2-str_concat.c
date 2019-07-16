#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: second string, to be added to the first one
 * Return: pointer to the new space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *a;

	unsigned int i, k, z;

	if (s1 == NULL)
		s1[0] = 0;

	if (s2 == NULL)
		s2[0] = 0;

	for (i = 0; s1[i] != 0; i++)
		;
	for (k = 0; s2[k] != 0; k++)
		;

	a = malloc(i + k + 1);
	if (a == NULL)
		return (NULL);

	for (z = 0; z < i; z++)
		a[z] = s1[z];

	if (k == 0)
		a[z] = 0;
	else
	{
		for (; z <= i + k - 1; z++)
		{
			a[z] = *s2;
			s2++;
		}
	}
	return (a);
}
