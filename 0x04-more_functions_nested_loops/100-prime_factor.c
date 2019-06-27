#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 below 1024
 * Return: total
 */

int main(void)
{
	long i = 2, n = 612852475143;

	while (i <= n)
	{
	if (n % i == 0)
	{
	n = n / i;
	i++;
	}
	else
	i++;
	}
	printf("%li\n", i - 1);
return (0);
}
