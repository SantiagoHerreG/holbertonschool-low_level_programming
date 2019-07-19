#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - progrma that multiplies two big numbers as strings
 * @argc: Number of factors passed as arguments
 * @argv: Array of pointers to the strings of the numbers
 * Return: void, prints the result
 */
int main(int argc, char **argv)
{
	char *r, *err = "Error";

	int size_1, size_2, n, z, i, i2, f1, f2, lleva = 0, sum = 0, k = 0, m = 0;

	if (argc != 3)
	{
		for (i = 0; err[i] != '\0'; i++)
			_putchar(err[i]);
		_putchar('\n');
		exit(98);
	}
	for (n = 1; n < argc; n++)
	{
	i = 0;
		while (argv[n][i] != '\0')
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				for (z = 0; err[z] != '\0'; z++)
					_putchar(err[z]);
				_putchar('\n');
				exit(98);
			}
		i++;
		}
	}
	for (size_1 = 0; argv[1][size_1] != '\0'; size_1++)
		;
	for (size_2 = 0; argv[2][size_2] != '\0'; size_2++)
		;
	if (size_1 == 0 || size_2 == 0)
	{
		for (z = 0; err[z] != '\0'; z++)
			_putchar(err[z]);
		_putchar('\n');
		exit(98);
	}
	if ((size_1 == 1 && argv[1][0] == '0') || (size_2 == 1 && argv[2][0] == '0'))
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	if (size_1 == 1 && size_2 == 1)
		r = malloc(size_1 * size_2 + 2);
	else
		r = malloc(size_1 * size_2 + 1);
	if (r == NULL)
		exit(98);
	for (z = 0; z < size_1 * size_2 + 1; z++)
		r[z] = '0';
	r[z] = '\0';
	for (i = size_1 - 1; i >= 0; i--)
	{
		lleva = 0;
		f1 = argv[1][i] - '0';
		k = 0;
		for (i2 = size_2 - 1; i2 >= 0; i2--)
		{
			f2 = argv[2][i2] - '0';
			sum = f1 * f2 + (r[k + m] - '0') + lleva;
			lleva = sum / 10;
			r[k + m] = (sum % 10 + '0');
			k++;
		}
		if (lleva > 0)
			r[k + m] = ((lleva + (r[k + m] - '0')) + '0');

		m++;
	}
	z = size_1 * size_2 + 1;
	while (z >= 0 && r[z - 1] == '0')
		z--;
	for ( ; z > 0; z--)
	{
		_putchar(r[z - 1]);
	}
	_putchar('\n');
	free(r);
	return (0);
}
