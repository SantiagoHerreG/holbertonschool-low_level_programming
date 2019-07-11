#include "holberton.h"
/**
 * prime - checks if a number is prime
 * @b: number
 * @i: number
 * Return: value
 */

int prime(int b, int i)
{
	if (b == i)
	return (1);
	else if (b % i == 0)
	return (0);
	else
	return (prime(b, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: value
 */
int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	return (0);
	else
	{
	a = prime(n, 2);
	return (a);
	}
}
