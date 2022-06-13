#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: points to to s
 * Return: nothing
 */

void print_rev(char *s)
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
	_putchar('\n');
}
