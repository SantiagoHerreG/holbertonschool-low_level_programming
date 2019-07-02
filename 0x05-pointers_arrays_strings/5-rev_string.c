#include "holberton.h"
/**
 * rev_string - changes a string into the reverse order
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0, k;

	char *t;

	for (i = 0; s[i] != '\0'; i++)
	k = i;

	while (k >= 0)
	{
	*t[j] = *s[k];
	k--;
	j++;
	}
	for (k = 0; k <= i; k++)
	*s[k] = *t[k];
}
