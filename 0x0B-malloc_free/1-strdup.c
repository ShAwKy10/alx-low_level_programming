#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - A function that returns a pointer to a newly allocated space
  *		in memory, which contains a copy of the string given as a parameter.
  *
  *@str: An array input that should  be copied.
  *
  *Return: Returns a pointer to a new string which is a duplicate of
  *		the string str, or returns NULL if str = NULL.
  */

char *_strdup(char *str)
{
	char *cp_arr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}

		cp_arr = malloc(sizeof(char) * i);

		if (cp_arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; str[i] != '\0'; i++)
		{
			cp_arr[i] = str[i];
		}

		i++;
		cp_arr[i] = '\0';
	}

	return (cp_arr);
}

