#include "main.h"
/**
* infinite_add - adds two numbers
* @n1: number
* @n2: number
* @r: buffer to store the result
* @size_r: size of buffer
*
* Return: buffer of the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ch1, ch2, c1, c2, cc, rem, add;

	for (c1 = 0; *(n1 + c1) != 0; c1++)
		;
	for (c2 = 0; *(n2 + c2) != 0; c2++)
		;
	cc = c1 >= c2 ? c1 : c2;
	if (cc + 1 >= size_r)
		return (0);
	*(r + (cc + 1)) = '\0';
	c1--, c2--;

	ch1 = *(n1 + c1) - 48, ch2 = *(n2 + c2) - 48;
	for (rem = 0; cc >= 0; cc--)
	{
		add = ch1 + ch2 + rem;
		if (add >= 10)
			rem = add / 10;
		else
			rem = 0;
		if (add > 0)
			*(r + cc) = (add % 10) + 48;
		else
			*(r + cc) = '0';
		if (c1 > 0)
			c1--, ch1 = *(n1 + c1) - 48;
		else
			ch1 = 0;
		if (c2 > 0)
			c2--, ch2 = *(n2 + c2) - 48;
		else
			ch2 = 0;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
