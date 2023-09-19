#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int num = _strlen(str);

	if ((num % 2) == 0)
	{
		num = num / 2;
	}
	else
	{
		num = (num - 1) / 2;
	}

	while (*(str + num) != '\0')
	{
		_putchar(*(str + num));
		num++;
	}

	_putchar('\n');
}
