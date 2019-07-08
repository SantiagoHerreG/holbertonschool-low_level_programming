#include "holberton.h"
#include <stdio.h>
/**
 * main - fibonacci numbers until 50
 * Return: total
 */

int main(void)
{
	int n = 0, new, prev = 1, ant = 1;

	while (prev < 4000000)
	{
	new = prev + ant;
	ant = prev;
	prev = new;
	if ((ant % 2) == 0)
	n = n + ant;
	}
	printf("%d\n", n);
return (0);
}
