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

	if (bit > n)
		return (-1);

	return (bit & n ? 1 : 0);
}
