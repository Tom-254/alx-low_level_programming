#include "main.h"

/**
 * rev_string - reverses a string.
 * @*s: points to to s
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0, i;
	char *begin, *end, temp;

	begin = s;
	end = s;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	for (i = 0; i < count - 1 ; i++)
		end++;

	for (i = 0; i < count / 2 ; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
