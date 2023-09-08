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
	char arr[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\n'};

	for (n = 0; n <= 26; n++)
	{
		putchar(arr[n]);
	}
	return (0);
}
