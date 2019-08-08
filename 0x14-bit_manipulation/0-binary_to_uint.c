#include "holberton.h"

/**
 * binary_to_uint - converts a string into a unsigned int
 * @b: string to be converted
 * Return: the unsigned int value of the number
 */

unsigned int binary_to_uint(const char *b)
{

	int i = 0, k = 0, count = 0;
	unsigned int n_pos = 1, sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	count = i;
	i = 0;

	while (b[i] != '\0')
	{
		for (k = 0; k < count - 1; k++)
			n_pos = n_pos * 2;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum + (b[i] - '0') * n_pos;
		n_pos = 1;
		i++;
		count--;
	}
	return (sum);
}
