#include "main.h"

/**
 * create_array -  that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size to initialize
 * @c: character to initialize
 * Return: character pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ac  = malloc(sizeof(char) * size);

	if (ac == NULL)
		return (NULL);

	while (i < size)
	{
		ac[i] = c;
		i++;
	}

	return (ac);
}
