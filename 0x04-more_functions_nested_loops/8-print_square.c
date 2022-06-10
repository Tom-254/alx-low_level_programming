#include "main.h"

/**
* print_square - prints a square, followed by a new line.
* @size: size of a square
* Return: void
*/

void print_square(int size)
{
	int i, z = 0;

	if (!(size <= 0))
	{
		while (z < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			z++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
