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
	int i = 0, sum = 0, n, a = 0;

	for (n = 1; n < argc; n++)
	{
	i = 0;
		while (argv[n][i] != '\0')
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
			printf("Error\n");
			return (1);
			}
		i++;
		}
	}
	i = 1;
	while (i < argc && atoi(argv[i]))
	{
		sum += atoi(argv[i]);
		a += 1;
		i++;
	}

	if (a == 0)
	{
		printf("0\n");
		return (0);
	}
		printf("%d\n", sum);
	return (0);
}
