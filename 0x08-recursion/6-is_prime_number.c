#include "main.h"

int primeCheck(int, int);

/**
 * is_prime_number - checks if n is a prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int j;

	j = n < 0 ? -n : n;
	if (j == 1)
		return (0);
	return (primeCheck(n, 2));
}

/**
 * primeCheck - checks
 * @n: number
 * @m: number
 *
 * Return: Always 0.
 */
int primeCheck(int n, int m)
{
	if (m == n)
		return (1);
	if ((n % m == 0) || n < 0)
		return (0);
	return (0 + primeCheck(n, m + 1));
}
