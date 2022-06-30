#include "main.h"

/**
 * _calloc -   allocates memory for an array, using malloc.
 * @nmemb: number of items to be
 * @size: size of each item to be
 * Return: Returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}

	return (array);
}
