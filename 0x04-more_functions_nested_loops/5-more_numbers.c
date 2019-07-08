#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers until 14
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0, a = 0;

	for (a = 0; a < 10; a++)
	{
	while (i < 15)
	{
	if (i >= 10)
	{
	_putchar('0' + (i / 10));
	}
	_putchar('0' + (i) % 10);
	i++;
	}
	_putchar('\n');
	i = 0;
	}
}
