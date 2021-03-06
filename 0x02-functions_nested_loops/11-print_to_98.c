#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - writes the character c to stdout
 * @n: starting number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
}
