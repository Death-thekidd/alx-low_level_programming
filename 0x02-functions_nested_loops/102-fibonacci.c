#include <stdio.h>

/**
 * main- Prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int count;
	long int first, second, fib;

	first = 1;
	second = 2;
	printf("%ld, %ld", first, second);
	for (count = 1; count <= 48; count++)
	{
		fib = first + second;
		printf(", %ld", fib);
		first = second;
		second = fib;
	}
	printf("\n");
	return (0);
}
