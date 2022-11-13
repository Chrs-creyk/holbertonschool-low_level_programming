#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - macro to free
 * @d: pointer with the value
 * return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
