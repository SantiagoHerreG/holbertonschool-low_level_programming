#include "holberton.h"
/**
 * rev_string - changes a string into the reverse order
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0, k, z;

	char new[1000000], *pnew = new;

	for (i = 0; s[i] != '\0'; i++)
	{
	z = i;
	}
	while (z >= 0)
	{
	pnew[j] = s[z];
	z--;
	j++;
	}
	for (k = 0; k <= j; k++)
	s[k] = pnew[k];
}
