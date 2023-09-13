#include "main.h"

/**
 * print_alphabet - Prints the aphabet lowercase follwed by new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int n;
	char arr[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z', '\n'};

	for (n = 0; n <= 26; n++)
	{
		_putchar(arr[n]);
	}

}
