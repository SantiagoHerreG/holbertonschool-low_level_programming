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
	int i = 1, sum = 0, k = 0, a = 0;

	while (i < argc)
	{
		if (atoi(argv[i]))
		{
			a += 1;
			sum += atoi(argv[i]);
		else
		{
			k += 1;
		}
		i++;
	}
	if (a == 0)
	{
		printf("0\n");
		return (0);
	}
	else if (k != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", sum);
	return (0);
}
