#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0' && s[i + 1] != '\0')
	{
	_print_rev_recursion(s + 1);
	}
	if (s[i] != '\0')
	_putchar(s[i]);
}
