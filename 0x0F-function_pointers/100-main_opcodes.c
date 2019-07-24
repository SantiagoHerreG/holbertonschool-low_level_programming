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
	int a;

	if (argc == 2)
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
	printf("%p\n", &main);
}
