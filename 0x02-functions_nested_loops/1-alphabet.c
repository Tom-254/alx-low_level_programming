#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c = 'a';

	c = 'a';
	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}

/**
 * main - writes to stdout
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
