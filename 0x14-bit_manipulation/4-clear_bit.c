#include "holberton.h"

/**
 * clear_bit - function that clears the value of a bit (to 0) at an index place
 * @n: pointer to the address of a number to be set
 * @index: place in the number
 * Return: 1 if it worked or -1 else
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (!n || index > 63)
		return (-1);

	bit = bit << index;

	*n &= ~bit;
		return (1);
}
