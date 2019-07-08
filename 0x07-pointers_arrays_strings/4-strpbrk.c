#include "holberton.h"
/**
 * _strpbrk - searches in a string for any of a set of characters
 * @s: pointer to the first string
 * @accept: pointer to string containing chars to match
 * Return: pointer to the final string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (sum == 0)
	{
	for (a = 0; accept[a] != '\0'; a++)
	{
	if (s[i] == accept[a])
	{
	s = s + i;
	sum = 1;
	break;
	}
	}
	}
	}
	if (sum == 0)
	return ('\0');
	else
	return (s);
}
