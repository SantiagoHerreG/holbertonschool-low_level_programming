#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints in std output its name
 *
 * Return: void
 */

int main(void)
{
	char *p = __FILE__;

	while (*p != '\0')
	{
	_putchar(*p);
	p++;
	}
	_putchar('\n');
	return (0);
}
