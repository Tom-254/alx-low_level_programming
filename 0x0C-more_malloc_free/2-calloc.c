#include "main.h"

/**
 * string_nconcat -   allocates memory for an array, using malloc.
 * @nmemb: number of items to be
 * @size: size of each item to be
 * Return: Returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	array = malloc(nmemb * size);

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}

	return (array);
}
