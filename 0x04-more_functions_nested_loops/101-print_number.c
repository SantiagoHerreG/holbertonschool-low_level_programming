#include "holberton.h"

/**
 * print_number - print any integer using putchar
 * @n: integer number
 * Return: void
 */

void print_number(int n)
{
	int i = 1000000000, a = 0, negative = -1;

	if (n < 0)
	{
	_putchar(45);
	negative = n % 10;
	negative = -negative;
	n = n / 10;
	n = -n;
	}
	while (i >= 10)
	{
	if (n / i > 0)
	break;
	else
	i = i / 10;
	}
	while (i > 1)
	{
	if (n > (i / 10))
	{
	a = n / i;
	_putchar('0' + a);
	}
	else
	{
	_putchar('0');
	}
	n = n % i;
	i = i / 10;
	}
	_putchar('0' + n % 10);
	if (negative > 0)
	_putchar('0' + negative);
}
