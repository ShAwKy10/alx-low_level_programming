#include "main.h"

/**
 * print_alphabet_x10 - Prints the aphabet lowercase follwed by new line x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int m;
	char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z'};

	for (m = 0; m < 10; m++)
	{

		for (n = 0; n <= 25; n++)
		{
			_putchar(arr[n]);
		}

		_putchar('\n');

	}
}
