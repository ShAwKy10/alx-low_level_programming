#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * new_dog - A function that creates a new dog.
 * @name: A variable holds the dog`s name.
 * @age: A variable holds the dog`s age.
 * @owner: A variable holds the owner`s name.
 *
 * Return: Return NULL if the function fails
 *		or variable holds the dog`s info.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	return (nd);
}
