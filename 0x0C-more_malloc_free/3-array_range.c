#include "main.h"

/**
 * array_range -    creates an array of integers.
 * @min: miniumum value include
 * @max: maximum value included
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *int_array, i = 0;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * (max - min + 1));

	if (int_array == NULL)
		return (NULL);

	while (min <= max)
	{
		int_array[i] = min;
		min++;
		i++;
	}

	return (int_array);
}
