#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees memory from a pointer to struct
 * @d: pointer to a structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
	free((*d).name);
	free((*d).owner);
}
