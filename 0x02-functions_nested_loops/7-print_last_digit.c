#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = -n;
	n = n % 10;
	_putchar('0' + n);
	return (n);
	}
	else
	{
	n = n % 10;
	_putchar('0' + n);
	return (n);
	}
}
