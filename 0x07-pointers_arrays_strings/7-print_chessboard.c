#include "holberton.h"
/**
 * print_chessboard - function that prints an array using putchar
 * @a: array of two dimensions
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, b;

	for (i = 0; i < 8; i++)
	{
	for (b = 0; b < 8; b++)
	{
	_putchar(a[i][b]);
	if (b == 7)
	_putchar('\n');
	}
	}
}
