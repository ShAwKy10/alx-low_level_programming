#include "main.h"

/**
 * _isdigit - This function checks if the input is digit or not.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' digit
 *		otherwise always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
