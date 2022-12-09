#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 */
int main(void)
{
	int i;

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	char alphaCased[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; ++i)
		putchar(alpha[i]);
	for (i = 0; i < 26 ; ++i)
		putchar(alphaCased[i]);
	putchar('\n');

	return (0);
}
