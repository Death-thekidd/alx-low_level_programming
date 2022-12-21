#include "main.h"
/**
* reverse_array - reverses the content of an array of integers.
* @a: array.
* @n: length of array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int count, i;
	int *ss, temp;

	i = 0;
	ss = a;
	count = n - 1;
	while (count >= 0)
	{
		if ((ss + i) == (ss + count))
			break;
		else if ((n % 2) == 0)
		{
			if ((ss + i)  == (ss + (count + 1)))
				break;
		}
		temp = *(ss + i);
		*(ss + i) = *(ss + count);
		*(ss + count) = temp;
		count--;
		i++;
	}
}
