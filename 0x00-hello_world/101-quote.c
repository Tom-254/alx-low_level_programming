#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	char *ptr = str;

	fwrite(ptr, sizeof(str), 1, stderr);
	return (1);
}
