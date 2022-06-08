#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_sign - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printchar('+');
		return (1);
	}
	else if (n == 0)
	{
		printchar('0');
		return (0);
	}
	else if (n < 0)
	{
		printchar('-');
		return (-1);
	}
	return (0);
}
