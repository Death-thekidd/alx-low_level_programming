#include "main.h"

/**
 * factorial - calculates the factorial of a given number n
 * @n: number
 *
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n *  factorial(n - 1));
}
