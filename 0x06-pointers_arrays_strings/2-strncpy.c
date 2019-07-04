#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copies a string the same way than original function
 * @dest: pointer
 * @src: pointer
 * @n: integer that means how many characters are gonna be copied
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	char *new;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	new = dest;
return (new);
}
