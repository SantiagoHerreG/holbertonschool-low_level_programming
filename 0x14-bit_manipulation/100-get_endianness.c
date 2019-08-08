#include "holberton.h"

/**
 * get_endianness - function that checks the endianness of an architecture
 * Return: integer 1 if big endian or 0 if little endian
 */

int get_endianness(void)
{
	int number = 9, bit = 1;
	char *ptr;

	ptr = (char *)&number;

	if (*ptr & bit)
		return (1);
	else
		return (0);
}
