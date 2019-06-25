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

	int b = 0;

	do {
	a += 3 * n;
	n++;
	} while ((3 * n) < 1024);

	do {
	b += 5 * i;
	i++;
	} while ((5 * i) < 1024);

	printf("%d\n", (a + b));
return (0);
}
