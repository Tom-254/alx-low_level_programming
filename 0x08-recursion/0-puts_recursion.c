#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: points to s
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);

	}
	else
	{
		_putchar('\n');
	}
}
