#include <stdio.h>

/**
 * main - Print sum of even valued terms in fibonacci sequesnce
 *
 * Return: void
*/
int main(void)
{
	long int first, second, sum_even, fib;

	first = 1;
	second = 2;
	fib = sum_even = 0;
	while (fib <= 4000000)
	{
		fib = first + second;
		if (fib % 2 == 0)
		{
			sum_even += fib;
		}
		first = second;
		second = fib;
	}
	printf("%ld\n", sum_even + 2);
	return (0);
}
