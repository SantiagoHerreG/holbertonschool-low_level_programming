#include "holberton.h"
/**
 * print_rev - prints a string in reverse order
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int n, i = 0;

	for (n = 0; s[n] != '\0'; n++)
	i = n;
		while (i >= 0)
		{
		_putchar(s[i]);
		i--;
		}
	_putchar('\n');
}
