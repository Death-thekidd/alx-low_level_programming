#include "main.h"

/**
* factorial - returns the factorial of a given number.
* @n: number
*
* Return: the factorial
*/
int factorial(int n)
{
	int num;

	num = n;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (num * factorial(num - 1));
}
