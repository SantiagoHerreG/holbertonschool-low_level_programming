#include "holberton.h"
/**
 * comp - checks if two strings are equivalent with wildcards
 * @s1: string
 * @s2: string2
 * @i: index string 1
 * @k: index string 2
 * @a: length of s1
 * @b: length of s2
 * @r: number of wildcards
 * Return: 1 if are equivalent
 */

int comp(char *s1, char *s2, int i, int k, int a, int b, int r)
{
	if (s2[k] == '*' && s1[i] == s2[k + 1] && (a - i) == (b - (k - r)))
	return (comp(s1, s2, i, k + 1, a, b, r + 1));
	else if ((s2[k] == s1[i] || s2[k] == '*') && (s2[k + 1] == '\0' || s2[k + 1]
	== '*')  && s1[i + 1] == '\0')
	return (1);
	else if (s1[i] == s2[k])
	return (comp(s1, s2, i + 1, k + 1, a, b, r));
	else if (s2[k] == '*')
	return (comp(s1, s2, i + 1, k, a, b, r));
	else
	return (0);
}

/**
 * count - string length
 * @s1: string
 * @a: number of string elements
 * Return: number of characters
 */
int count(char *s1, int a)
{
	if (s1[a] == '\0')
	return (a - 1);
	else
	return (count(s1, a + 1));
}
/**
 * count2 - string length
 * @s2: string
 * @b: number of string elements
 * Return: number of characters
 */
int count2(char *s2, int b)
{
	if (s2[b] == '\0')
	return (b - 1);
	else if (s2[b] == '*')
	return (count2(s2 + 1, b));
	else
	return (count2(s2, b + 1));
}
/**
 * wildcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 if are equivalent
 */
int wildcmp(char *s1, char *s2)
{
	int a, b, c;

	a = count(s1, 0);
	b = count2(s2, 0);
	if (b > a)
	return (0);
	else
	c = comp(s1, s2, 0, 0, a, b, 0);
	return (c);
}
