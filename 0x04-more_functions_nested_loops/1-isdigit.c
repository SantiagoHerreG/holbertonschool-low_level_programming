#include "holberton.h"
/**
 * _isdigit - check if a character is a digit
 * @c: character
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
