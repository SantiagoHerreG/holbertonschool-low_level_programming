#include "holberton.h"
/**
 * root - returns the square root of a number
 * @b: number
 * @i: number
 * Return: value
 */

int root(int b, int i)
{
	if (b == i * i)
	return (i);
	else if (b / i - i < 0)
	return (-1);
	else
	return (root(b, i + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * Return: value
 */
int _sqrt_recursion(int n)
{
	int a;

	if (n < 0)
	return (-1);
	else if (n == 0)
	return (0);
	else
	{
	a = root(n, 1);
	return (a);
	}
}
