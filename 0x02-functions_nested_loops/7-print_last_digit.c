#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
	a = -n;
	a = a % 10;
	_putchar('0' + a);
	return (a);
	}
	else
	{
	n = n % 10;
	_putchar('0' + n);
	return (n);
	}
}
