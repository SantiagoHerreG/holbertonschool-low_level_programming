#include "holberton.h"
/**
 * jack_bauer - prints minutes of the day in time format
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

void jack_bauer(void)
{
	int a = '0', b = '0', c = '0', d = '0';

	for (a = '0'; a <= '1'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
				}
			}
		}
	}
	for (a = '2'; a <= '2'; a++)
	{
		for (b = '0'; b <= '3'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
				}
			}
		}
	}
}
