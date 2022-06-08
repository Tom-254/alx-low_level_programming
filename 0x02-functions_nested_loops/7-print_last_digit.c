#include <stdio.h>

/**
 * print_last_digit - writes to stdout
 * @value: The value to print
 * Return: On success 1.
 */
void print_last_digit(int value)
{
	if (value < 0)
	{
		value = -value;
	}
	putchar(value % 10 + '0');
}
