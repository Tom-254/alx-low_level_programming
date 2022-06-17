#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: points to to dest
 * @src: points to src
 * @n:  i dont't know
 * Return: character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
