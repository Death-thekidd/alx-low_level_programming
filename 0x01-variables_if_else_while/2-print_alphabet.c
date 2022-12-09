#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Starting point
 * Return: 0
 * Description: I sometimes suffer from insomnia. And when I can't fall asleep,
 *  I play what I call the alphabet game
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i < 0; --i)
		putchar(alpha[i]);
	putchar('\n');

	return (0);
}
