#include "variadic_functions.h"

/**
 * print_all - A function that prints anything.
 * @format: A constant variable  is a list of
 *		types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list pap;
	char *sp;

	while (format[i])
		i++;

	va_start(pap, i);

	while (format[j])
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(pap, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			sp = va_arg(valist, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", sp);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(pap);
}
