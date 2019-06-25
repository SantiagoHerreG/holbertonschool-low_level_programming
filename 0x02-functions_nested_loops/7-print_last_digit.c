#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_last_digit(int n)
{
	int a, b;

	if (n >= 0)
	{
	a = n % 10;
	_putchar(48 + a);
	return (a);
	}
	else
	{
	n = n * (-1);
	b = n % 10;
	_putchar(48 + b);
	return (b);
	}
}
