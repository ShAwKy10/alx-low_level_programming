#include "main.h"

/**
 *print_sign - This function prints the sign of a number.
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'n' is greater than zero
 *		returns 0 if 'n' is zero
 *		returns -1 if 'n' is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
}
