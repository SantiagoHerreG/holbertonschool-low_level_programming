#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet ten times using while nested loops
 *
 * Return: No return.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 'a';

	int b = 1;

	while (b <= 10)
	{
	i = 'a';
	while (i <= 'z')
	{
	_putchar(i);
	i++;
	continue;
	}
	b++;
	_putchar('\n');
	}
return;
}
