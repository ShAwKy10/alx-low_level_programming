#include "dog.h"
#include "stdio.h"

/**
 * print_dog - A function that prints a struct dog.
 * @d: A pointer to struct dog to initialize.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		/*Do nothing*/
	}
	else if ((d->owner == NULL) || (d->age == NULL))
	{
		printf("(nil)\n");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %S\n", d->owner);
	}
}


