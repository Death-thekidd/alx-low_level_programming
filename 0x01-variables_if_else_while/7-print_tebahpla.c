#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 * Description: I sometimes suffer from insomnia. And when I can't fall asleep,
 *  I play what I call the alphabet game
 */
int main(void)
{
	int i;

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; --i)
		putchar(alpha[i]);
	putchar('\n');

	return (0);
}
