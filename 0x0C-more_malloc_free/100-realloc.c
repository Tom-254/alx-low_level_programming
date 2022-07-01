#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: old memory allocated
 * @old_size: old memory allocated size
 * @new_size: new memory allocated size
 * Return: Returns a pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}


	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = old_ptr[i];

	free(old_ptr);
	return (new_ptr);
}
