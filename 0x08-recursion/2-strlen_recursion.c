#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: integer that represents the length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
