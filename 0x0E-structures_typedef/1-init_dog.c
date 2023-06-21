#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct to initialize
 * @name: field in the struct
 * @age: field in the struct
 * @owner: field in the struct
 *
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) {
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
