#include "holberton.h"
/**
 * _islower - check if a character is upper or lower case
 * @c: alphabetic character
 * Return: 1 if lower case
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
