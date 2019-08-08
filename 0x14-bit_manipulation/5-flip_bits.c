#include "holberton.h"

/**
 * flip_bits - returns number of bits needed to be flipped to get a number
 * @n: first number
 * @m: second number (target)
 * Return: number of bits that are needed to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 1, temp = 0;
	unsigned int count = 0;

	temp = n ^ m;

	while (temp)
	{
		if (temp & bit)
			count++;
		temp >>= 1;
	}
	return (count);
}
