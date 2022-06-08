#include "main.h"
#include <stdio.h>

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

	while (count <= size)
	{
		if (str[count] != '\0')
			putchar(str[count]);
		putchar('\n');
		count++;
	}
	return (0);
}
