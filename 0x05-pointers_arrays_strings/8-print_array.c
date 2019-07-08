#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints the n elements of an array of integers
 * @a: array of integers
 * @n: number of elements for printing
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	printf("\n");
	else
	{
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
	}
}
