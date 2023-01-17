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
	int nname, nowner, i;
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}
	for (nname = 0; name[nname]; nname++)
		;
	for (nowner = 0; owner[nowner]; nowner++)
		;
	new_dog->name = malloc(nname + 1);
	new_dog->owner = malloc(nowner + 1);
	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nname; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	for (i = 0; i < nowner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
