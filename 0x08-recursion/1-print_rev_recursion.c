#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: points to s
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char first = *s;

		s++;
		_print_rev_recursion(s);
		_putchar(first);
	}
}
