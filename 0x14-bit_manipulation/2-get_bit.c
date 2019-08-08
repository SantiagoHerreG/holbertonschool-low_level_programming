#include "holberton.h"

/**
 * get_bit - get a bit located in a index position of a binary number
 * @n: number to be bit extracted
 * @index: place to extract the bit
 * Return: integer with the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	bit <<= index;

	if (n == 0 && index == 0)
		return (0);
	else if (n == 1 && index == 0)
		return (1);
	else
	{
		if (bit > n)
			return (-1);

		if (bit & n)
			return (1);
		else
			return (0);
	}
}
