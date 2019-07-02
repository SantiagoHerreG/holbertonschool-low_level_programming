#include "holberton.h"
/**
 * _puts - prints a string
 * @str: pointer to a string
 * Return: void
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		{
		_putchar(str[n]);
		}
	_putchar('\n');
}
