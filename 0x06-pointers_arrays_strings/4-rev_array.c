#include "main.h"

/**
 * reverse_array -   content of an array of integers.
 * @a: points to a
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp[n];

	for (int i = 0; i < n; i++)
	{
		temp[i] = *(a + i);
	}

	for (int i = 0; i < n; i++)
	{
		*(a + i) = temp[n - i - 1];
	}
}
