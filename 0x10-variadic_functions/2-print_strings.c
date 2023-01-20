#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: strings passed in
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0, str = va_arg(ap, char *); i < n; i++, str = va_arg(ap, char *))
	{
		if (separator && (i != 0))
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(ap);
}
