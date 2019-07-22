#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - dog info structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the animal
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* __DOG_H__ */
