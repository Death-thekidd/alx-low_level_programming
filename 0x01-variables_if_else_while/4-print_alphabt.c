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
	_Bool check;

	for (i = 0; i < 26; i++)
	{
		check = (alph[i] != 'e') && (alph[i] != 'q');

		if (check)
			putchar(alph[i]);
	}
	putchar('\n');

	return (0);
}
