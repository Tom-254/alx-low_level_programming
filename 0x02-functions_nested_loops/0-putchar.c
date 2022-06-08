#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printchar(char c)
{
	return (write(0, &c, 1));
}

/**
 * main - writes to stdout
 *
 * Return: On success 1.
 */
int main(void)
{
	char str[] = "_putchar";
	int count = 0;
	int size = sizeof(str);

	while (count < size)
	{
		printchar(str[count]);
		count++;
	}
	printchar('\n');
	return (0);
}
