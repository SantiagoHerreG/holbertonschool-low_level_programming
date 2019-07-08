#include "holberton.h"
/**
 * _memcpy - copies memory area into buffer
 * @dest: pointer to the buffer (memory space)
 * @src: memory space to be written
 * @n: number of positions to replace
 * Return: pointer to the buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
