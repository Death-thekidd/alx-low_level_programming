#include "main.h"
int _sqrt(int n, int m);

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number
*
* Return: the square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqrt(n, 2));
}

/**
* _sqrt - returns the natural square root of a number.
* @n: number
* @m: number
*
* Return: the square root of a number
*/
int _sqrt(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
			return (m);
		else
			return (-1);
	}
		return (0 + _sqrt(n, m + 1));
}
