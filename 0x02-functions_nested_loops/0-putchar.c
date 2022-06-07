#include <string.h>
#include "main.h"

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

	while (count <= size)
	{
		if (str[count] == '\0')
			_putchar('\n');
		_putchar(str[count]);
		count++;
	}
	return (0);
}
