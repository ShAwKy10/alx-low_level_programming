#include "main.h"

/**
 * print_numbers - Prints numbers follwed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;
	char newL = '\n';
	char arr[10] = {'0', '1', '2', '3', '4',
			'5', '6', '7', '8', '9'
			};

	for (n = 0; n < 10; n++)
	{
		_putchar(arr[n]);
	}

	_putchar(newL);

}
