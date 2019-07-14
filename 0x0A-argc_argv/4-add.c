#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of several numbers
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings passed to main
 * Return: exit success
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argv[1] == '\0')
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	i++;
	}
		printf("%d\n", sum);
		return (0);
}
