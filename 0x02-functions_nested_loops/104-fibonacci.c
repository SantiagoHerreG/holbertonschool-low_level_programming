#include <stdio.h>
/**
 * main - fibonacci numbers until 50
 * Return: total
 */

int main(void)
{
	unsigned long long int n, new, prev = 1, ant = 1;

	for (n = 1; n < 91; n++)
	{
	printf("%llu, ", prev);
	new = prev + ant;
	ant = prev;
	prev = new;
	}
	printf("%llu\n", prev);
return (0);
}
