#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_char = '0';
	int ch = 'a';

	while (num_char <= '9')
	{
		putchar(num_char);
		num_char++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);
}
