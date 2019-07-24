#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns the sum of two numbers
 * @a: first int
 * @b: second int
 * Return: Total
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first int
 * @b: second int
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of two numbers
 * @a: first int
 * @b: second int
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: first int
 * @b: second int
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus between two numbers
 * @a: first int
 * @b: second int
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
