#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: points to to a
 * @b: points to to b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int value_a = *a;
	*a = *b;
	*b = value_a;
}
