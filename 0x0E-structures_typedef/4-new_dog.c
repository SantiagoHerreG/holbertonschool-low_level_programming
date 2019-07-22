#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates and stores a new variable type dog
 * @name: name of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: Pointer to a structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name && owner)
	{
	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
	}
	else
	return (NULL);
}
