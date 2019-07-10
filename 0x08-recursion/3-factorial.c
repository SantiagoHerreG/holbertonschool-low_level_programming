#include "holberton.h"
/**
 * factorial - returns the factorial
 * @n: number for calculating the factorial
 * Return: factorial value
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	else if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));
}
