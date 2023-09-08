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
	char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z'};
	char ARR[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', '\n'};
	for (n = 0; n <= 25; n++)
	{
		putchar(arr[n]);
	}
	for (n = 0; n <= 26; n++)
	{
		putchar(ARR[n]);
	}
	return (0);
}
