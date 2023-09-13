#include "main.h"

/**
 *print_last_digit - This function prints the last digit of a number.
 *
 * @n: Takes in intiger type input for function
 *
 * Return: returns the value os last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
