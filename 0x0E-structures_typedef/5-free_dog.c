#include "dog.h"

/**
 * free_dog -   function that frees dogs.
 * @d: struct datatype pointer to dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog_t.name);
		free(dog_t.owner);
		free(d);
	}
}
