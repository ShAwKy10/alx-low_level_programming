#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: Pointer holds the string to be printed between the strings.
 * @n: Variable holds the number of parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list psp;
	unsigned int i;
	char *str;

	va_start(psp, n);

	for (i = 0; i < n; i++)
	{
		str = vs_arg(psp, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			prinf("nil");
		}

		if ((separator) && (i < (n - 1)))
			printf("%s", separator);
	}

	printf("\n");

	va_end(psp);
}
