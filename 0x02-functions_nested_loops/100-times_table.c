#include "holberton.h"
/**
 * print_times_table - prints times table until n from 0
 * @n: number less than 16
 * Return: nothing
 */
void print_times_table(int n)
{
	if (n > 15)
	return;
	else
	{
	int i, a = 0;

	for (i = 0; i <= n; i++)
	{
	_putchar('0');
	for (a = 1; a <= n; a++)
	{
	_putchar(',');
	_putchar(' ');
	if ((a * i) < 10)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + (a * i));
	}
	if (((a * i) >= 10) && ((a * i) <= 99))
	{
	_putchar(' ');
	_putchar('0' + ((a * i) / 10));
	_putchar('0' + ((a * i) % 10));
	}
	if ((a * i) > 99)
	{
	_putchar('0' + ((a * i) / 100));
	_putchar('0' + (((a * i) / 10) % 10));
	_putchar('0' + ((a * i) % 10));
	}
	}
	_putchar('\n');
	}
	}
}
