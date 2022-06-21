#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: points to a
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
				_putchar(a[i][j]);
				_putchar('\n');

			_putchar(a[i][j]);
		}
	}
}
