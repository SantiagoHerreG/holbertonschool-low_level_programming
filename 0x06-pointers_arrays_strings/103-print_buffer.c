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
	int i = 0, k;

	printf("%08x:", i);
	for (k = 0; k < 5; k++)
	{
		printf(" ");
		printf("%x", b[k]);
	}
	for ( ; i < size; i++)
	{
		if (b[i] > 9)
		printf("%c", b[i]);
		else
		printf(".");
	}
}
