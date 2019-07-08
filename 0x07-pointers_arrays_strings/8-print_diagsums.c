#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: matrix of two dimensions
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
	sum = sum + *(a + ((size * i) + i));
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
	sum = sum + *(a + (((i + 1) * size) - (i + 1)));
	}
	printf("%d\n", sum);
}
