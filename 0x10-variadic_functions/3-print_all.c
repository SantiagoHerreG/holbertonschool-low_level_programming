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
	va_list ap;

	char *b;

	int i = 0, z = 0;

	va_start(ap, format);

	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 's':
				b = va_arg(ap, char*);
				z++;
				if (b)
					printf("%s", b);
				else if (b == 0)
					printf("(nil)");
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				z++;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				z++;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				z++;
				break;
		}
	if ((format[i + 1]) != 0 && z)
		printf(", ");
	z = 0;
	i++;
	}
	va_end(ap);
	printf("\n");
}
