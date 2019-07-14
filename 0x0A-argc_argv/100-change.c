#include <stdio.h>
#include <stdlib.h>

/**
 * coins - calculates coins to change
 * @cents: number of cents
 * @coin: value of a single coin
 * Return: coins needed
 */
int coins(unsigned int *cents, int coin)
{
	unsigned int a = 0;

	a = *cents;
	if (*cents / coin)
	*cents = *cents % coin;
	return (a / coin);
}
/**
 * main - prints the change of money in minimal number of coins(25-10-5-2-1)
 * @argc: number of arguments passed to main
 * @argv: cents to change
 * Return: exit success
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0, k = 0, *pk;

	pk = &k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	k = atoi(argv[1]);
	sum += coins(pk, 25);
	sum += coins(pk, 10);
	sum += coins(pk, 5);
	sum += coins(pk, 2);
	sum += coins(pk, 1);
	printf("%d\n", sum);
	return (0);
}
