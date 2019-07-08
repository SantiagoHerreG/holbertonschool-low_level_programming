#include "holberton.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{

	int n, i, k;

	for (n = 0; str[n] != '\0'; n++)
	{
		i++;
	}
		if (i % 2 == 0)
		{
			for (k = (i / 2); str[k] != '\0'; k++)
			_putchar(str[k]);
		}
		else
		{
			for (k = ((i / 2) + 1); str[k] != '\0'; k++)
			_putchar(str[k]);
		}
	_putchar('\n');
}
