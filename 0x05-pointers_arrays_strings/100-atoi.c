#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to an array of characters
 * Return: integer if there is a number or (0) if not
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, m = 0;

	unsigned int n = 0;

	while (s[m] != '\0')
	m++;
	while (s[i] != '\0')
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
	s[j] = *(s + i);
	j++;
	}
	else if (j > 0)
	break;
	i++;
	}
	while (j < m)
	{
	s[j + 1] = '\0';
	j++;
	}
	if (j == 0)
	{
	return (0);
	}
	else
	{
	while (s[k] != '\0')
	{
	n = (n * 10) + (s[k] - '0');
	k++;
	}
	}
return (n);
}
