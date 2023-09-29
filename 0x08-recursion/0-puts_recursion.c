#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 */
void _puts_recursion(char *s)
{
	if (*s == "")
	{
		_putchar(*s);
		return;
	}

	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s);
	}
}
