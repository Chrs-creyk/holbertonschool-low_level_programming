#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
