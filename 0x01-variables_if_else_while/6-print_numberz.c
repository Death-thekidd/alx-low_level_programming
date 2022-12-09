#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (Success)
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 */
int main(void)
{
	int i;
	char numbers[10] = "0123456789";

	for (i = 0; i < 10; i++)
		putchar(numbers[i]);
	putchar('\n');

	return (0);
}
