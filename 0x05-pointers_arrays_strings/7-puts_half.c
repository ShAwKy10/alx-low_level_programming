#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int num = _strlen(s);

	if ((num % 2) == 0)
	{
		num = num / 2;
	}
	else
	{
		num = (num - 1) / 2;
	}

	for (num; *(str + num) != '\0'; i++)
	{
		_putchar(*(str + num));
	}

	_putchar('\n');
}
