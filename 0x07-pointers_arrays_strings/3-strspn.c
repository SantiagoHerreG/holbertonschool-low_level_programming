#include "holberton.h"
/**
 * _strspn - the length of a string containing only chars from another
 * @s: pointer to the buffer (memory space)
 * @accept: pointer to string
 * Return: unsigned int with length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (a = 0; accept[a] != '\0'; a++)
	{
	if (s[i] == accept[a])
	{
	sum = sum + 1;
	}
	}
	if (i == sum)
	break;
	}
	return (sum);
}
