#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything passed to it
 * @format: list of data type of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *b;

	int i = 0, z = 1;

	va_list ap;

	while (!format)
		return;
	va_start(ap, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 's':
				b = va_arg(ap, char*);
				if (b == 0)
				{
					printf("(nil)");
					break;
				}
				printf("%s", b);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			default:
				z = 0;
		}
		if ((format[i + 1]) != 0 && z)
			printf(", ");
		z++;
		i++;
	}
	va_end(ap);
	printf("\n");
}
