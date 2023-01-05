#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array
 * @array: The size of the array we are looking through
 * @size: The size of the array
 * @value: The value that the function is trying to find.
 * Return: The index of the value or if value is not present in array
 * or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_point;
	int low;
	int high;
	int index;
	char *message;

	message = "Value found between indexes";

	if (array == NULL)
		return (-1);
	jump_point = sqrt(size);

	for (index = 0; index < (int)size; index += jump_point)
	{
		if (value <= array[index])
		{
			low = index - 3;
			high = index;
			printf("%s [%d] and [%d]\n", message, low, high);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
	}
	if (index > (int)size)
	{
		low = index - jump_point;
		high = low;
		printf("%s [%d] and [%d]\n", message, low, index);
	}

	for (index = low; index <= high; index++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
