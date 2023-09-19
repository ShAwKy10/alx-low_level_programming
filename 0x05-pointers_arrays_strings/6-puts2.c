#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int i;
	int printer = 0;

	for (i = 0; *(str + i) != '\0'; i += 2)
	{
		_putchar(*(str + printer));
		printer++;
	}

	_putchar('\n');
}
