#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @c: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);
}
