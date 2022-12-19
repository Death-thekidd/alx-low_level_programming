#include "main.h"
#include <stdio.h>
/**
* rev_string - reverses a string.
* @s: parmater to reverse
*
* Return: void
*/

void rev_string(char *s)
{
	char *ss, temp;
	int count, i, countt;

	count = 0;
	while (*(s + count) != 0)
	{
		count++;
	}
	count--;
	countt = count + 1;
	i = 0;
	ss = s;
	while (count >= 0)
	{
		if ((ss + i) == (ss + count))
			break;
		else if ((countt % 2) == 0)
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
