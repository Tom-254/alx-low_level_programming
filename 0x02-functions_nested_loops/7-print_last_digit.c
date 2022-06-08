#include <stdio.h>

/**
 * print_last_digit - writes to stdout
 * @value: The value to print
 * Return: On success 1.
 */
int print_last_digit(int value)
{
	int last_digit;

	if (value < 0)
	{
		value = -value;
	}
	last_digit = value % 10;
	putchar(last_digit + '0');
	return (last_digit);
}
