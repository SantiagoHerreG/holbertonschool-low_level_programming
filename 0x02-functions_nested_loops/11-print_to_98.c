#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - numbers from n to 98 in order
 * @n: first number
 * Return: total
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
		printf("%d, ", n);
		n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
		printf("%d, ", n);
		n++;
		}
	}
	printf("98\n");
}
