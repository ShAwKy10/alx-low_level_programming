#include "main.h"

/**
 * print_most_numbers - Prints numbers exept
 *			(2 - 4) follwed by new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;
	char newL = '\n';
	char arr[10] = {'0', '1', '2', '3', '4',
			'5', '6', '7', '8', '9'
			};

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}

		_putchar(arr[n]);
	}

	_putchar(newL);

}
