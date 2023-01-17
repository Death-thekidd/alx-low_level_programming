#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *ptr;

	ptr = malloc(sizeof(new_dog));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
