#include "main.h"
#include <stdio.h>

/**
 * main - Prints and returns sum of multiples of 3, 5 before 1024
 *
 * Return: int, sum of multiples of 3, 5, before 1024
*/
int main(void)
{
	int i, sum;

	for (sum = 0, i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
