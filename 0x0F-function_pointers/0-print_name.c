#include "function_pointers.h"

/**
 * print_name - function that prints a name using function pointers
 * @name: string to be printed
 * @f: function address
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name[0] != '\0')
	f(name);
}
