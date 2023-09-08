#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'This program checks the value of the variable n'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int newL = '\n';
	int arr[17] = {'0', '1', '2', '3', '4',
			'5', '6', '7', '8', '9',
			'a', 'b', 'c', 'd', 'e',
			'f'};

	for (n = 0; n <= 16; n++)
	{
		putchar((char)arr[n]);
	}

	putchar((char)newL);

	return (0);
}
