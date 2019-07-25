#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its own function
 * @argc: number of arguments passed
 * @argv: pointer to array of strings
 * Return: 0 on succes
 */

int main(int argc, char **argv)
{
	int a, b;

	unsigned int i = 0, z;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned int *function_A = (unsigned int *) main;

	for (i = 0; (i * 4) < a; i++)
	{
		z = (*(function_A + i));
		for (b = 0; b < 4 && (4 * i) + b < a - 1; b++)
		{
			printf("%x ", z % 256);
			z = z / 256;
		}
		if ((4 * i) + b + 1 == a)
			printf("%x\n", z % 256);
		b = 0;
	}
}
