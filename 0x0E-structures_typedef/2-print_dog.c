#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((d->name) != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if ((d->age) != 0)
			printf("Age: %f\n", d->age);
		else
			printf("age: (nil)\n");
		if ((d->owner) != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
