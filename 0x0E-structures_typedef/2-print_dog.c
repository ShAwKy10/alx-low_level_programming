#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - A function that prints a struct dog.
 * @d: A pointer to struct dog to initialize.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((d->owner == NULL) || (d->age == NULL))
	{
		printf("(nil)\n");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %S\n", d->owner);
}


