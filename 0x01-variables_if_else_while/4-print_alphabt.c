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
	char arr[25] = {'a', 'b', 'c', 'd', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z', '\n'};

	for (n = 0; n <= 24; n++)
	{
		putchar(arr[n]);
	}
	return (0);
}
