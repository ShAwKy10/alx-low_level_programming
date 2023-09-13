#include "main.h"

/**
 * main - Entry point
 *
 * Description - This program prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		_putchar(str[ch]);
	}

	return (0);
}
