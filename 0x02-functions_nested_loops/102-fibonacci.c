#include "holberton.h"
#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 below 1024
 * Return: total
 */

int main(void)
{
	long n = 1, new, prev = 1, ant = 1;

	while (n < 50)
	{
	printf("%li, ", prev);
	new = prev + ant;
	ant = prev;
	prev = new;
	n++;
	}
	
	printf("%li\n", prev);
return (0);
}
