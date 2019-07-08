#include "holberton.h"
/**
 * memset - replaces n characters in a buffer
 * @s: pointer to the buffer (memory space)
 * @b: character to be written
 * @n: number of positions to replace
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
