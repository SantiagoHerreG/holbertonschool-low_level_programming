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
	va_list ap;

	const char *a;

	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	a = va_arg(ap, const char *);

	if (a)
		printf("%s", a);
	else
		printf("(nil)");

	for (i = 1; i < n; i++)
	{
		a = va_arg(ap, const char *);
			if (a && separator)
				printf("%s%s", separator, a);
			else if (separator && !a)
				printf("%s(nil)", separator);
			else if (a && !separator)
				printf("%s", a);
	}
	printf("\n");
	va_end(ap);
}
