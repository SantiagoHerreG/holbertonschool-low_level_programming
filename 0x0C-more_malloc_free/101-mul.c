#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * printerr - function that prints error and exits
 * @s: Pointer to string Error
 * Return: void
 */
void printerr(char *s)
{
	for (; *s != '\0'; s++)
		_putchar(*s);
	_putchar('\n');
	exit(98);
}
/**
 * length - calculates the length of a string without the null char
 * @str: pointer to the string to size
 * Return: int with the length
 */
int length(char (*str))
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * is_zero - checks if a string is zero or if the string contains chars
 * @args: double pointer to strings
 * Return: void. Exit program if success
 */
void is_zero(char **args)
{
	int n, i, z;

	char *err = "Error";

	for (n = 1; n < 3; n++, z = 0)
	{
		for (i = 0; args[n][i] != '\0'; i++)
			if (args[n][i] < '0' || args[n][i] > '9')
				printerr(err);
			else if (args[n][i] != '0')
			z++;
		if (z == 0)
		{
			_putchar('0');
			_putchar('\n');
		exit(0);
		}
	}
}
/**
 * main - progrma that multiplies two big numbers as strings
 * @argc: Number of factors passed as arguments
 * @argv: Array of pointers to the strings of the numbers
 * Return: void, prints the result
 */
int main(int argc, char **argv)
{
	char *r, *err = "Error";

	int size_1, size_2, z = 0, i, i2, f1, f2, lleva = 0, sum = 0, k = 0, m = 0;

	if (argc != 3)
		printerr(err);

	is_zero(argv);

	size_1 = length(argv[1]);
	size_2 = length(argv[2]);
	r = malloc(size_1 * size_2 + 1);
	if (r == NULL)
		exit(98);
	for (z = 0; z < size_1 * size_2 + 1; z++)
		r[z] = '0';
	r[z] = '\0';
	for (i = size_1 - 1; i >= 0; i--, m++, k = 0, lleva = 0)
	{
		f1 = argv[1][i] - '0';
		for (i2 = size_2 - 1; i2 >= 0; i2--, k++)
		{
			f2 = argv[2][i2] - '0';
			sum = f1 * f2 + (r[k + m] - '0') + lleva;
			lleva = sum / 10;
			r[k + m] = (sum % 10 + '0');
		}
		if (lleva > 0)
			r[k + m] = ((lleva + (r[k + m] - '0')) + '0');
	}
	for (z = size_1 * size_2 + 1; z >= 0 && r[z - 1] == '0'; z--)
		;
	for ( ; z > 0; z--)
		_putchar(r[z - 1]);
	_putchar('\n');
	free(r);
	return (0);
}
