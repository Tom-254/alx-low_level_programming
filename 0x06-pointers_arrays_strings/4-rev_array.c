#include "main.h"

/**
 * reverse_array -   content of an array of integers.
 * @a: points to to the array to be reversed
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
