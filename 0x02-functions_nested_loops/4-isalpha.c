#include "main.h"

/**
 *_isalpha - This function checks for alphabetic character.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is a letter
 *		otherwise always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
