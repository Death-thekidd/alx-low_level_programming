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
	return (_sqrt(n, n));
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
	int sqrt;


	if ((n * n) == m)
		return (n);
	if ((n == 1) || (n < 0))
		return (-1);
	sqrt = _sqrt(n - 1, m);

	return (sqrt);
}
