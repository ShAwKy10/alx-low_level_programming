#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: Constant variable holds the number of the parameters.
 *
 * Return: The sum of all its parameters or If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list sp;
	int i;
	int sum = 0;

	va_start(sp, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sp, int)
	}

	va_end(sp);

	return (sum);
}
