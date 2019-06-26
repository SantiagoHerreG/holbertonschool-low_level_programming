#include <stdio.h>
/**
 * main - fibonacci numbers until 50
 * Return: total
 */

int main(void)
{
	unsigned long n, new, prev = 1, ant = 1;

	for (n = 0; n < 91; n++)
	{
	printf("%lu, ", prev);
	new = prev + ant;
	ant = prev;
	prev = new;
	}
	printf("%lu\n", prev);
return (0);
}
