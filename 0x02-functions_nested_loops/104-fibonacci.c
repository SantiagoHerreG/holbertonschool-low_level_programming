#include <stdio.h>
/**
 * main - fibonacci numbers until 50
 * Return: total
 */

int main(void)
{
	float n, new, prev = 1, ant = 1;

	for (n = 1; n < 91; n++)
	{
	printf("%.0f,", prev);
	new = prev + ant;
	ant = prev;
	prev = new;
	}
	printf("%.0f\n", prev);
return (0);
}
