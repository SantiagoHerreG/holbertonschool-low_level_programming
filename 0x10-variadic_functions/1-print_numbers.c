#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: pointer to a const string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == 0)
		return;

	va_list ap;
	unsigned int i;

	va_start(ap, n);

	printf("%d", va_arg(ap, const unsigned int));

	for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(ap, const unsigned int));

	printf("\n");

	va_end(ap);
}
