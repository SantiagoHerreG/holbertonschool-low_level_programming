#include "holberton.h"
/**
 * print_numbers - writes the alphabet
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
