#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	const char *a;
	int chk, len, i;
	unsigned int num, digit;

	a = b;
	for (len = 0; *a != 0; a++, len++)
		;
	chk = checkBArr(b);
	if (chk || (b == NULL))
		return (0);
	num = _atoi(b, len);
	for (i = 1, digit = 0; num != 0; i *= 2, num /= 10)
		digit += (num % 10) * i;
	return (digit);
}

/**
 * checkBArr - checks for foreign characters
 * @b: binary number
 *
 * Return: boolean
 */
int checkBArr(const char *b)
{
	for (; *b != 0; b++)
		if (*b != 49 && *b != 48)
			return (1);

	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @b: string
 * @l: length of string
 *
 * Return: converted number
 */
unsigned int _atoi(const char *b, int l)
{
	int place, i;
	unsigned int num;

	for (i = l - 1, place = 1, num = 0; i >= 0; place *= 10, i--)
		num += ((b[i] - 48) * place);
	return (num);
}
