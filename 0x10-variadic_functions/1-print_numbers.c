#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: number of integers passed in
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0, num = va_arg(ap, int); i < n; i++, num = va_arg(ap, int))
	{
		if (separator && (i != 0))
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");
	va_end(ap);
}
