#include "holberton.h"
/**
 * print_line - prints a line in the terminal
 * @n: number of lines
 * Return: nothing
 */

void print_line(int n)
{
	int a = 0;

	for (a = 0; a < n; a++)
	{
	if (n <= 0)
	break;
	else
	{
	_putchar(95);
	}
	}
	_putchar('\n');
}
