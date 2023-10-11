#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: Variable of the type struct dog.
 * @name: Variable holds the dog`s name.
 * @age: Variable holds the dog`s age.
 * @owner: Variable holds the name of the dog`s owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
