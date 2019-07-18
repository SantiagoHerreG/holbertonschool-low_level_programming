#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
	int a, b, n = 0, k = 0;

	for (a = 0; n1[a] != '\0'; a++)
	;
	for (b = 0; n2[b] != '\0'; b++)
	;
	if (b >= (size_r - 1) || a >= (size_r - 1))
	return (0);
	r[size_r] = '\0';
	while (a > 0 && b > 0)
	{
	n = n + (n1[a - 1] - '0') + (n2[b - 1] - '0');
	r[size_r - 1] = (n % 10 + '0');
	n = n / 10;
	a--;
	b--;
	size_r--;
	}
	while (a > 0 || b > 0)
	{
	if (a > 0)
	{
	n = n + (n1[a - 1] - '0');
	a--;
	}
	else
	n = n + (n2[b - 1] - '0');
	b--;
	r[size_r - 1] = (n % 10 + '0');
	n = n / 10;
	size_r--;
	}
	if (n != 0)
	r[size_r - 1] = (n + '0');
	else
	size_r++;
	for (k = 0; r[k + size_r - 1] != '\0'; k++)
		r[k] = r[k + size_r - 1];
		r[k] = '\0';
return (r);
}

/**
 * main - Program that multiplies two big numbers passed as arguments
 * @argc: number of arguments, must be 3
 * @argv: array of pointers to arguments passed
 * Return: Void, prints the multiplication
 */

int main(int argc, char **argv)
{









