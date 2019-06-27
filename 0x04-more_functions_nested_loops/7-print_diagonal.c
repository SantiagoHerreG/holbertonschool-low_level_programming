#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: number of lines
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0, b = 0;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
	while (b < i)
	{
	_putchar(' ');
	b++;
	}
	b = 0;
	_putchar(92);
	_putchar('\n');
	}
	}
}
