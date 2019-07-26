#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: pointer to a const string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator == 0)
		return;

	va_list ap;
	const char *a;
	unsigned int i;

	va_start(ap, n);

	printf("%s", va_arg(ap, const char *));

	for (i = 1; i < n; i++)
	{
		a = va_arg(ap, const char *);
			if (a)
				printf("%s%s", separator, a);
			else
				printf("%s(nil)", separator);
	}

	printf("\n");

	va_end(ap);
}
