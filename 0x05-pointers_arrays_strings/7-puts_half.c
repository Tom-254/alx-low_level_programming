#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: points to to str
 * Return: nothing
 */

void puts_half(char *str)
{
	int count = 0, i;
	char *ref = str;

	while (*ref != '\0')
	{
		ref++;
		count++;
	}

	if (count % 2 != 0)
	{
		for (i = count - (count - 1) / 2; i < count; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = count / 2; i < count; i++)
		{
			_putchar(*(str + i));
		}
	}

	_putchar('\n');
}
