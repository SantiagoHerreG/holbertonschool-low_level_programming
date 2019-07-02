#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: pointer
 * @src: pointer
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	while ((*dest = *src) != '\0')
	{
	dest++;
	src++;
	}
return (dest);
}
