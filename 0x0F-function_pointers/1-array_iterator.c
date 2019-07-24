#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes another function in each element
 * @array: cointains the elements to be passed to a function
 * @size: number of elements of the array
 * @action: pointer to a function that is going to be executed
 * Return: void
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
