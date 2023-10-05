#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Write a function that creates an array of chars,
  *		and initializes it with a specific char
  *
  * @size: Input holds the size of the array
  * @c: Input is used to initialize the array
  *
  * Return: Pointer to the array or Null if the size is zero
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
