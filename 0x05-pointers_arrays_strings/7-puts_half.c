#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int printer;
	int num = 0;

	while (str[num] != '\0')
	{
		num++;
	}


	if ((num % 2) == 0)
	{
		num = num / 2;
	}
	else
	{
		num = (num - 1) / 2;
	}
	
	printer = num;

	while (*(str + num) != '\0')
	{
		_putchar(*(str + printer));
		num++;
		printer++;
	}

	_putchar('\n');
}
