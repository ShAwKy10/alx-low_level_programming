#include "main.h"

/**
 * _islower - This function checks for lowercase character.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' lowercase
 *		otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
