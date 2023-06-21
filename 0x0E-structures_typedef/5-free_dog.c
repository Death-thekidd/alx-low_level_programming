#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: struct to free
 *
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
