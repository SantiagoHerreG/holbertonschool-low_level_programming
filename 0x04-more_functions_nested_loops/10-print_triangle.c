#include "holberton.h"
/**
 * print_triangle - prints a triangle of #'s in the terminal
 * @size: number of lines
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1, b = 1;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else if (size == 1)
	{
	_putchar('#');
	_putchar('\n');
	}
	else
	{
	while (i <= size)
	{
	while (b <= size - i)
	{
	_putchar(' ');
	b++;
	}
	while (b <= size)
	{
	_putchar('#');
	b++;
	}
	b = 1;
	_putchar('\n');
	i++;
	}
	}
}
