#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: points to s
 * @b: ponts to b
 * @n: number of bytes to be copied
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
