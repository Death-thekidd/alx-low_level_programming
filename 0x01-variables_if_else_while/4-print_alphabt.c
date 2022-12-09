#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 * Description:  Prints the alphabet in lowercase,
 * followed by a new line except q and e.
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{

		if ((alph[i] != 'e') && (alph[i] != 'q'))
			putchar(alph[i]);
	}
	putchar('\n');

	return (0);
}
