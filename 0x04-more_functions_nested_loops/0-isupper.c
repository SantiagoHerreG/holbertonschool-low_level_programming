#include "holberton.h"
/**
 * _isupper - check if a character is upper case
 * @c: alphabetic character
 * Return: 1 if upper case
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
