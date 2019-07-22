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

	char *cpyname, *cpyowner;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	cpyname = malloc(sizeof(char *));

	if (cpyname == NULL)
	{
		free(new_d);
		return (NULL);
	}

	cpyname = name;

	cpyowner = malloc(sizeof(char *));

	if (cpyowner == NULL)
	{
		free(new_d);
		free(cpyname);
		return (NULL);
	}

	cpyowner = owner;

	new_d->name = cpyname;
	new_d->age = age;
	new_d->owner = cpyowner;

	return (new_d);
}
