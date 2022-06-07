#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * main - writes the character c to stdout
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
		write(1, &str[count], 1);
		count++;
	}
	return (0);
}
