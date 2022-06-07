#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - writes to stdout
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int count = 0, c;

	while (count <= 10)
	{
		c = 'a';
		while (c < 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		count++;
	}
}
