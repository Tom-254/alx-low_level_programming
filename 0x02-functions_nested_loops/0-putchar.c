#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 */
int main(void)
{
	_printchar("_putchar\n");
	return (0);
}
