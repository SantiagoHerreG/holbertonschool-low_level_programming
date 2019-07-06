#include <stdio.h>
#include "holberton.h"
/**
 * print_buffer - prints a buffer with a specified format
 * @b: buffer
 * @size: number of bytes to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, k, a = 0;

	if (size > 0)
	{
	while (a <= size)
	{
	printf("%08x: ", a);
	for (k = 0; k < 10; k++)
	{
		if (k + a < size)
		{
		printf("%02x", b[k + a]);
		k++;
		printf("%02x", b[k + a]);
		printf(" ");
		}
		else
		{
		printf("    ");
		k++;
		printf(" ");
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (b[a + i] > 10 && (a + i) < size)
		printf("%c", b[a + i]);
		else if ((a + i) < size)
		printf(".");
	}
	a = a + 10;
		printf("\n");
	}
	}
	else
	printf("\n");
}
