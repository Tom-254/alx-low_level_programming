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
 * print_char - writes to stdout
 *
 * Return: void
 */
void print_char(void)
{
	putchar(',');
	putchar(' ');
	putchar(' ');
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

			if (result >= 1 && result < 10)
			{
				print_char();
			}
			else if (result >= 10)
			{
				putchar(',');
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
				putchar('\n');
			}
			else if (c == 0)
			{
				print_char();
			}
		}
		c++;
	}
}
