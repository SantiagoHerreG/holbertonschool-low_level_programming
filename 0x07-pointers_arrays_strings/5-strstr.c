#include "holberton.h"
/**
 * _strstr - function that locates and returns a substring in a string
 * @haystack: pointer to the first string
 * @needle: pointer to objective string
 * Return: pointer to the final string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a, needs = 0, sum = 0, k = 0;

	for (needs = 0; needle[needs] != '\0'; needs++)
	;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	sum = 0;
	a = 0;
	if (haystack[i] == needle[a])
	{
		for (a = 0; a <= needs; a++)
		{
			if (haystack[i] == needle[a])
			{
			sum = sum + 1;
			i++;
			}
			if (sum == needs + 1)
			{
			k = i - needs - 1;
			haystack = haystack + k;
			break;
			}
		}
	}
	if (sum == needs + 1)
	break;
	}
	if (sum == 0)
	return ('\0');
	else
	return (haystack);
}
