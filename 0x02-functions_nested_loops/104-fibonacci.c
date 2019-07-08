#include <stdio.h>
/**
 * main - fibonacci numbers until 98th
 * Return: total
 */

int main(void)
{
	unsigned long newa, newb, anta = 0, antb = 1, a, b = 1;

	while (b < 100000000000)
	{
		printf("%lu, ", b);
		newb = b + antb;
		antb = b;
		b = newb;
	}
		a = b / 100000000000;
		b = b % 100000000000;
	while (a < 1400000000)
	{
		if (b % 100000000000 < 10000000000)
		{
		printf("%lu0%lu, ", a, b % 100000000000);
		}
		else
		{
		printf("%lu%lu, ", a, b % 100000000000);
		}
		newa = a + anta;
		anta = a;
		newb = (b + antb);
		antb = b % 100000000000;
		a = (newa + (newb / 100000000000));
		b = newb % 100000000000;
	}
		printf("%lu%lu\n", a, b % 100000000000);
return (0);
}
