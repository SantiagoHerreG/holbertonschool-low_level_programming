#include "holberton.h"
/**
 * times_table - prints times table
 * Return: nothing
 */

void times_table(void)
{
	int i = 0, a = 0;

	while (i < 10)
	{
	_putchar('0');
	_putchar(',');
	for (a = 1; a <= 8; a++)
	{
	if ((a * i) < 10)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + (a * i));
	_putchar(',');
	}
	if ((a * i) >= 10)
	{
	_putchar(' ');
	_putchar('0' + ((a * i) / 10));
	_putchar('0' + ((a * i) % 10));
	_putchar(',');
	}
	}
	_putchar(' ');
	if ((9 * i) < 10)
	{
	_putchar(' ');
	_putchar('0' + (9 * i));
	_putchar('\n');
	}
	else
	{
	_putchar('0' + ((9 * i) / 10));
	_putchar('0' + ((9 * i) % 10));
	_putchar('\n');
	}
	i++;
	}
}
