#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (i = counter; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
