#include "holberton.h"
/**
 * print_number - prints an integer as if it were a string
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
	k = -n;
		_putchar(45);
	}
	else
	{
	k = n;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
