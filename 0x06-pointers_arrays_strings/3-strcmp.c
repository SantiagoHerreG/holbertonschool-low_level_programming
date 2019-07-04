#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares the ascii sum of characters in two strings
 * @dest: pointer
 * @src: pointer
 * Return: integer. positive if the first string is bigger
 */
int _strcmp(char *dest, char *src)
{
	int i = 0, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] > src[i])
		{
			k = 15;
			break;
		}
		else if (dest[i] < src[i])
		{
			k = -15;
			break;
		}
	}
	if (src[i] != '\0' && k == 0)
	k = -15;
	return (k);
}
