#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: points to dest
 * @src: points to src
 * @n: points to n
 * Return:  pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
