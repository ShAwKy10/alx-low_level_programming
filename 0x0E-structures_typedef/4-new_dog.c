#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 *		including the terminating null byte (\0)
 *		to the buffer pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string.
 * @src: string to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
	int lenn;
	int leno;
	dog_t *nd;

	lenn = _strlen(name);
	leno = _strlen(owner);

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->name = malloc(sizeof(char) * (lenn + 1));;

	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->owner = malloc(sizeof(char) * (leno + 1));

	if (nd->owner == NULL)
	{
		free(nd)
		free(nd->name);
		return (NULL);
	}

	_strcpy(nd->name, name);
	_strcpy(nd->owner, owner);
	nd->age = age;

	return (nd);
}
