#include "holberton.h"
/**
 * palindrome - checks if a string is palindrome
 * @s: string
 * @i: index incremental
 * @k: index decremental
 * Return: 1 if palindrome
 */

/*int palindrome(char *s, int i, int k)
{
	if (s[i] != s[k])
	return (0);
	else if (k - i == 1 && s[k] == s[i])
	return (1);
	else if (k == i)
	return (1);
	else
	return (palindrome(s, i + 1, k - 1));
}
*/
/**
 * count - checks if a string is palindrome
 * @s: string
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
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 if palindrome
 */
int wildcmp(char *s1, char *s2)
{
	int a, b;

	a = count(s1, 0);
	b = count2(s2, 0);

	if (b > a)
	return (0);
	else
	return (1);
}
