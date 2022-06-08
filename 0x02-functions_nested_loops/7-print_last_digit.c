#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - writes to stdout
 * @value: The value to print
 * Return: On success 1.
 */
int print_last_digit(int value)
{
	int last_digit;

	last_digit = value % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
