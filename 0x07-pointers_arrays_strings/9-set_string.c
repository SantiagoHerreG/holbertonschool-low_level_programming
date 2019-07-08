#include "holberton.h"
/**
 * set_string - sets the value of a pointer
 * @s: destination pointer to a pointer
 * @to: string to be written
 * Return: void 
 */
void set_string(char **s, char *to)
{
	*s = to;
}
