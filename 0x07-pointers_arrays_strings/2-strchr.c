#include "holberton.h"
/**
 * _strchr - copies memory area into buffer
 * @s: pointer to the buffer (memory space)
 * @c: character
 * Return: pointer to the buffer
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s[0] == '\0')
	return ('\0');
	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	s = s + i;
	break;
	}
	if (s[i] == '\0')
	s = '\0';
	}
	return (s);
}
