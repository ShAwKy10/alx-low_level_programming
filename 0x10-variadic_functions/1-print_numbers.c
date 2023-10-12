#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: Pointer holds the string to be printed between the strings.
 * @n: Variable holds the number of parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnp;
	unsigned int i;

	if (n == 0)
		return;

	va_start(pnp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pnp, int));

		if (separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(pnp);
}
