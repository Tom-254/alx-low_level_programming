#include <stdio.h>

/**
 * print_long - writes to stdout
 * @value: The value to print
 * Return: On success 1.
 */
void print_long(long value)
{
	if (value != 0)
	{
		print_long(value / 10);
		putchar((value % 10) + '0');
	}
}

/**
 * times_table - writes to stdout
 *
 * Return: On success 1.
 */
void times_table(void)
{
	int c = 0, z;

	while (c <= 9)
	{
		for (z = 0; z <= 9; z++)
		{
			int result = z * c;

			if (result < 10)
			{
				putchar(' ');
			}

			if (result == 0)
			{
				putchar('0');
			}
			else
			{
				print_long(result);
			}
			if (z == 9)
			{
				printf("\n");
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
}
