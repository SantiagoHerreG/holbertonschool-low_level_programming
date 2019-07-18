#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string to be concatenated to string 1
 * @n: number of bytes of string 2 to be concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;

	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != 0; k++)
		;

	for (i = 0; s2[i] != 0; i++)
		;

	if (i <= n)
	n = i;

	a = malloc(k + n + 1);

	if (a == NULL)
		return (NULL);

	i = 0;
	k = 0;

	for (i = 0; s1[i] != 0; i++)
	{
		a[k] = s1[i];
		k++;
	}
	for (i = 0; s2[i] != 0 && i < n; i++)
	{
		a[k] = s2[i];
		k++;
	}
	a[k] = '\0';

	return (a);
}
