#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}

	}
	return (-1);
}
