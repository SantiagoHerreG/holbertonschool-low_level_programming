#include "holberton.h"
/**
 * palindrome - checks if a string is palindrome
 * @s: string
 * @i: index incremental
 * @k: index decremental
 * Return: 1 if palindrome
 */

int palindrome(char *s, int i, int k)
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

/**
 * count - checks if a string is palindrome
 * @s: string
 * @a: number of string elements
 * Return: number of characters
 */
int count(char *s, int a)
{
	if (s[a] == '\0')
	return (a - 1);
	else
	return (count(s, a + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	int a, b;

	a = count(s, 0);
	b = palindrome(s, 0, a);

	return (b);

}
