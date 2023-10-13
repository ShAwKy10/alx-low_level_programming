#include "variadic_functions.h"

/**
 * print_all - A function that prints anything.
 * @format: A constant variable  is a list of
 *		types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list pap;
	char *sp;

	while (format[i])
		i++;

	va_start(pap, i);

	while (format[j])
	{
		if ((format[j] == 'c') || (format[j] == 's'))
		{
			sp = va_arg(pap, char *);

			if (sp)
				printf("%s", sp);
			else
				printf("(nil)");
		}
		else if ((format[j] == 'i') || (format[j] == 'f'))
			printf("%f", va_arg(pap, float));
		else
			va_arg(pap, void);

		j++
	}

	printf("\n");

	va_end(pap);

}
