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
	int i;
	char str[] = "_putchar";

	for (i = 0; i < sizeof(str); i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
