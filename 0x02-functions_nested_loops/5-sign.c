#include <stdio.h>
#include "main.h"
#include <unistd.h>

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
		write(1, '+', 10);
		return (1);
	}
	else if (n == 0)
	{
		write(1, '0', 10);
		return (0);
	}
	else if (n < 0)
	{
		write(1, '-', 10);
		return (-1);
	}
	return (0);
}
