#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 * Description:  Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 */
int main(void)
{
	int i;

	char alpha[6] = "abcdef";
	char number[10] = "0123456789";

	for (i = 0; i < 10; ++i)
		putchar(number[i]);
	for (i = 0; i < 6; ++i)
		putchar(alpha[i]);
	putchar('\n');

	return (0);
}
