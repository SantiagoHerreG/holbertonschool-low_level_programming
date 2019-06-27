#include <stdio.h>
/**
 * main - fizz buzz test
 * Return: 0
 */

int main(void)
{
	int b = 2;

	printf("1");
	while (b <= 100)
	{
	if (b % 3 == 0 && b % 5 != 0)
	{
	printf(" Fizz");
	b++;
	continue;
	}
	else if (b % 3 != 0 && b % 5 == 0)
	{
	printf(" Buzz");
	b++;
	continue;
	}
	else if (b % 3 == 0 && b % 5 == 0)
	{
	printf(" FizzBuzz");
	b++;
	continue;
	}
	else
	{
	printf(" %d", b);
	b++;
	continue;
	}
	}
	printf("\n");
return (0);
}
