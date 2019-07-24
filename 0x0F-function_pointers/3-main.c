#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs an operation from arguments passed to it
 * @argc: number of commands passed
 * @argv: pointer to an array of pointers to the strings passed
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int a, b, c;

	int (*pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (argv[2][0] != '+' && argv[2][0] != '-'
	&& argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	pointer = get_op_func(argv[2]);

	c = pointer(a, b);

	printf("%d\n", c);
	return (0);
}
