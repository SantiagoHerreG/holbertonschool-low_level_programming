#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at an index place
 * @n: pointer to the address of a number to be set
 * @index: place in the number
 * Return: 1 if it worked or -1 else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	bit = bit << index;

	if (bit > *n && *n != 0)
		return (-1);

	if (~(*n) & bit)
	{
		*n += bit;
		return (1);
	}
	else
		return (-1);
}
