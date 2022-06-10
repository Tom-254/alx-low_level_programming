#include <stdio.h>

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: number of times to display \
* Return: void
*/

void print_diagonal(int n)
{
	int i, z = 0;

	if (!(n <= 0))
	{
		while (z < n)
		{
			for (i = 0; i < z; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			z++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

