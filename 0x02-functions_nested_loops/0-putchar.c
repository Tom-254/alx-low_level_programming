#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - writes to stdout
 *
 * Return: On success 1.
 */
int main(void)
{
	write(1, "_putchar", sizeof("_putchar") - 1);
	write(1, '\n', 1);
	return (0);
}
