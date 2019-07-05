#include "holberton.h"
/**
 * infinite_add - prints an integer as if it were a string
 * @n1: integer to print
 * @n2: char
 * @r: buffer
 * @size_r: size
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, n = 0;

	for (a = 0; n1[a] != '\0'; a++)
	;
	for (b = 0; n2[b] != '\0'; b++)
	;
	if (b >= (size_r - 1) || a >= (size_r - 1))
	return (0);

	r[size_r] = '\0';
	while (a >= 0 && b >= 0)
	{
	n = n + (n1[a] - '0') + (n2[b] - '0');
	r[size_r - 1] = (n % 10 + '0');
	n = n / 10;
	a--;
	b--;
	size_r--;
	}
	while (a > 0)
	{
	n = n + (n1[a] - '0');
	a--;
	r[size_r - 1] = (n % 10 + '0');
	n = n / 10;
	size_r--;
	}
	while (b > 0)
	{
	n = n + (n2[b] - '0');
	b--;
	r[size_r - 1] = (n % 10 + '0');
	n = n / 10;
	size_r--;
	}
	for ( ; size_r - 1 >= 0; size_r--)
		r[size_r - 1] = '\0';
	return (r);
}
