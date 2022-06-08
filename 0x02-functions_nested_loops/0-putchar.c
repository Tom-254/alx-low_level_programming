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
	long int size = sizeof(str);

	for (i = 0; i < size - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
