#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: points to to str
 * Return: nothing
 */

void puts2(char *str)
{
	int count = 0;

	_putchar(*str);
	str++;
	while (*str != '\0')
	{
		count++;
		if (count % 2 == 0)
			_putchar(*str);
		str++;

	}
	_putchar('\n');
}
