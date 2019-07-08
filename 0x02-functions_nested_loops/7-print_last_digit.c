#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a, b;

	if (n < 0)
	{
		a = n % 10;
		a = -a;
		_putchar('0' + a);
		return (a);
	}
	else
	{
		b = n % 10;
		_putchar('0' + b);
		return (b);
	}
}
