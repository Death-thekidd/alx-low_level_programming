#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: rest of parameters
 *
 * Return: Calculated sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (sum = 0, i = 0, num = va_arg(ap, int); i < n; i++, num = va_arg(ap, int))
		sum += num;
	va_end(ap);
	return (sum);
}
