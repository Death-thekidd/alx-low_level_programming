#include <stdio.h>
#include <stddef.h>

char *reverseArray(char *arr, int size);
char *mul(char product[], char *num1, char *num2, int sz1, int sz2);

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: arguments passes
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int sz1, sz2, total, itr;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	for (sz1 = 0; argv[1][sz1]; sz1++)
		;

	for (sz2 = 0; argv[2][sz2]; sz2++)
		;
	total = sz1 + sz2 + 1;

	num1 = reverseArray(argv[1], sz1);
	num2 = reverseArray(argv[2], sz2);
	printf("%s  %s\n", num1, num2);

	char product[total];

	product[total - 1] = 0;
	for (itr = 0; product[itr] != 0; itr++)
		product[itr] = '0';

	mul(product, num1, num2, sz1, sz2);

	return (0);
}

/**
 * reverseArray - reverses an array
 * @arr: the array to reverse
 * @size: size of the array
 *
 * Return: the reversed array
*/
char *reverseArray(char *arr, int size)
{
	int start, end;

	start = 0, end = size - 1;
	while (start < end)
	{
		int temp;

		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	return (arr);
}

/**
 * mul - multiplies two strings
 *
 * @product: array to be finalized
 * @num1: first string
 * @num2: second string
 * @sz1: size of first string
 * @sz2: size of second string
 *
 * Return: multiplied char
*/
char *mul(char product[], char *num1, char *num2, int sz1, int sz2)
{
	int i, j, digit_product, total, itr, divide, prod;

	for (i = 0; i < sz1; i++)
	{
		for (j = 0; j < sz2; j++)
		{
			digit_product = (num1[i] - 48) * (num2[j] - 48);
			printf("%d\n", digit_product);
			prod = (product[i + j] - 48) + digit_product;
			product[i + j] = (prod % 10) + 48;
			divide = (prod) / 10;
			product[i + j + 1] = ((product[i + j + 1] - 48) + (divide)) + 48;
		}
	}
	total = (sz1 + sz2);

	printf("%s\n", product);

	for (itr = total; itr > 1 && product[itr - 1] == '0'; itr--)
	{
		printf("%c\n", product[itr - 1]);
		product[itr - 1] = 0;
		total--;
	}

	printf("%s\n", reverseArray(product, total));
}
