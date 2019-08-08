#include "holberton.h"

/**
 * print_binary - function that prints a number converted into binary
 * @n: unsigned long int number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1, i = 0, count = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	for (i = 0; count < n; i++)
		count += count * 2;

	if (count == n)
		_putchar('1');

	bit = bit << 63;

	while (bit > 0)
	{
		if (bit <= n)
		{
			if (n & bit)
				_putchar('1');
			else
				_putchar('0');
		}
		bit = bit >> 1;
	}
}
