#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 below 1024
 * Return: total
 */

int main(void)
{
	long i = 2, n = 61285247514;

	while (i < n)
	{
	if (n % i == 0)
	{
	n = n / i;
	continue;
	}
	else
	i++;
	}
	printf("%li\n", n);
return (0);
}
