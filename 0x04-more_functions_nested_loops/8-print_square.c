#include "holberton.h"
/**
 * print_square - prints a square of # in the terminal
 * @size: number of lines
 * Return: nothing
 */

void print_square(int size)
{
	int i = 0, b = 0;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)
	{
	while (b < size)
	{
	_putchar('#');
	b++;
	}
	b = 0;
	_putchar('\n');
	}
	}
}
