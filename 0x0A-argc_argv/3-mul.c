#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings passed to main
 * Return: exit success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, a, b;

	if (argv[1] != '\0' && argv[2] != '\0')
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	i = a * b;
	printf("%d\n", i);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
