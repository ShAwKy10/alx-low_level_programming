#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
	}
	else
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
