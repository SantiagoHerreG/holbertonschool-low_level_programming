#include "holberton.h"
/**
 * _strncat - concatenates two strings into the first one
 * @dest:  pointer to the first string
 * @src: pointer to the second string
 * @n: number of bytes concatenated
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, z, i = 0;

	char *new;

	for (k = 0; dest[k] != '\0'; k++)
	;
	for (z = 0; src[z] != '\0'; z++)
	;
		while (i < n && i <= z)
		{
			dest[k] = src[i];
			i++;
			k++;
		}
	if (i - 1 < n)
	dest[k] = '\0';
	new = dest;
	return (new);
}
