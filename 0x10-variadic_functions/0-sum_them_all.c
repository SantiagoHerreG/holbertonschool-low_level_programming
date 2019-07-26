#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: const unsigned int, first number to be summed
 * Return: Sum of its parameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	unsigned int sum = 0, i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);
	return (sum);
}
