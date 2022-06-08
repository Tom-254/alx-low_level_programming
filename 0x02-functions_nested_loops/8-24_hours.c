#include "main.h"
#include <stdio.h>

/**
 * int_to_char - writes the character c to stdout
 * @value: value to test
 * Return: void.
 */
void int_to_char(int value)
{
	if (value != 0)
	{
		int_to_char(value / 10);
		putchar((value % 10) + '0');
	}
}

/**
 * jack_bauer - writes the character c to stdout
 * Return: void.
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			if (hour < 10)
			{
				putchar('0');
				putchar(hour + '0');
				putchar(':');
			}
			else
			{
				int_to_char(hour);
				putchar(':');
			}
			if (minute < 10)
			{
				putchar('0');
				putchar(minute + '0');
			}
			else
			{
				int_to_char(minute);
			}
			putchar('\n');
			minute++;
		}
		hour++;
	}
}
