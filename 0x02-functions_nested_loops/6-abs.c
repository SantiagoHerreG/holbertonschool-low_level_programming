#include "holberton.h"
/**
 * _abs - computes the absolute value of a number
 * @c: number
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int _abs(int c)
{
	if (c >= 0)
	{
	return (c);
	}
	else
	{
	c = c * (-1);
	return (c);
	}
}

