#include "holberton.h"
/**
 * _strchr - copies memory area into buffer
 * @s: pointer to the buffer (memory space)
 * @c: character
 * Return: pointer to the buffer
 */
char *_strchr(char *s, char c)
{
	unsigned int i, a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	a = 1;
	s = s + i;
	break;
	}
	}
	if (a == 0)
	return ('\0');
	else
	return (s);
}
