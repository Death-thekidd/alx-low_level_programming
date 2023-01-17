#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - creates a new dog.
 * @d: pointer to dog struct
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
