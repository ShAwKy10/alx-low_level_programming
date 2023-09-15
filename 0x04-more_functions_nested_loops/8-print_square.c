#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int j = 0;
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < size)
		{
			while (i < size)
			{
				_putchar('#');
				i++;
			}

			_putchar('\n');
			j++;
		}
	}
}
