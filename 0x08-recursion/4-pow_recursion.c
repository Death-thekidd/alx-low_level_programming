#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: number
* @y: number
*
* Return: the factorial
*/
int _pow_recursion(int x, int y)
{
	int pow;

	pow = x;
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (pow * _pow_recursion(pow, y - 1));
}
