#include "holberton.h"
/**
 * swap_int - interchanges the value of two variables from a function
 * @a: pointer to a variable
 * @b: pointer to a variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
