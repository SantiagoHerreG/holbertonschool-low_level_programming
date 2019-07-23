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

	int i;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	for (i = 0; name[i] != 0; i++)
		;
	new_d->name = malloc((i + 1) * sizeof(char));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; name[i] != 0; i++)
		new_d->name[i] = name[i];
	new_d->name[i] = name[i];

	for (i = 0; owner[i] != 0; i++)
		;
	new_d->owner = malloc((i + 1) * sizeof(char));
	if (new_d->owner == NULL)
	{
		free(new_d);
		free(new_d->name);
		return (NULL);
	}
	for (i = 0; owner[i] != 0; i++)
		new_d->owner[i] = owner[i];
	new_d->owner[i] = owner[i];

	new_d->age = age;
	return (new_d);
}
