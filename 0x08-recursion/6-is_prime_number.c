#include "main.h"
int is_prime(unsigned int n, unsigned int c);

/**
* is_prime_number - returns 1 if the input integer
* is a prime number, otherwise return 0.
* @n: number
*
* Return: the square root of a number
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}

/**
* is_prime - returns 1 if the input integer is a prime number,
* otherwise return 0.
* @n: number
* @c: number
*
* Return: the square root of a number
*/
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, c + 1));
}
