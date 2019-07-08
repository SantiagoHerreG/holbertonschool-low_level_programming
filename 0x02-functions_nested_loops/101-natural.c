#include "holberton.h"
#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 below 1024
 * Return: total
 */

int main(void)
{
	int n = 0;

	int a = 0;

	int i = 0;

	while ((5 * n) < 1024)
	{
	a = a + (5 * n);
	n++;
	}

	while ((3 * i) < 1024)
	{
	if (((3 * i) % 5) != 0)
	{
	a = a + (3 * i);
	}
	i++;
	}

	printf("%d\n", a);
return (0);
}
