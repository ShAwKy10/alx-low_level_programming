#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	else
	{
		s--;
		_putchar(*s);
		*s = '\0';
		_print_rev_recursion(s);
	}
}
