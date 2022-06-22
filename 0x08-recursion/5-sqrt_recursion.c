#include "main.h"


/**
 * _sqrt_recursion -   returns the natural square root of a number.
 * @original: number to return square root
 * @starting: number to reduce to find square root;
 * Return: returns the natural square root of a number.
 */

int find_square_number(int original, int starting)
{
	if (starting * starting > original)
		return (-1);

	if (starting * starting == original)
		return (starting);

	return (find_square_number(original, starting + 1));
}


/**
 * _sqrt_recursion -   returns the natural square root of a number.
 * @n: number to return square root
 * Return: returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (find_square_number(n, 1));
}
