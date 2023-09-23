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
	for (i = 0; c[i]; i++)
	{
		if (c[i] > 64 && c[i] < 91)
		{
			c[i] = c[i] + 32;
		}
	}

	return (c);
}
