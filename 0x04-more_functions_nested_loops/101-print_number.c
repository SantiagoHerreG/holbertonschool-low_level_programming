#include "holberton.h"

/**
 * print_number - print any integer using putchar
 * @n: integer number
 * Return: void
 */

void print_number(int n)
{
        int i = 1000000000, a = 0;

        unsigned int k;

        if (n < 0)
        {
        _putchar(45);
        k = -n;
        }
	else
	k = n;
        while (i >= 10)
        {
        if (k / i > 0)
        break;
        else
        i = i / 10;
        }
        while (i >= 1)
        {
        if (k - (i / 10) > 0)
        {
        a = k / i;
        _putchar('0' + a);
        }
        else
	{
	_putchar(48);
	}
	k = k % i;
	i = i / 10;
	}
}
