#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;
	int printer = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + printer));
		printer++;
	}
}
