#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: points to to s
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0, i;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		s--;
		_putchar(*s);
	}
}
