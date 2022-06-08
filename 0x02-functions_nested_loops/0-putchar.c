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
	write(1, "_putchar", sizeof("_putchar"));
	write(1, "0x0A", 1);
	return (0);
}
