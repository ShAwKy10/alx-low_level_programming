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
	int m;
	int flag;

	flag = n;
	if (n > 0)
	{
		while (flag >= 10)
		{
			flag = flag - 10;
		}
		m = flag;
	}
	else if (n < 0)
	{
		while (flag <= -10)
		{
			flag = flag + 10;
		}
		m = flag;
	}
	else
	m = 0;
	_putchar(m);

	return (m);
}
