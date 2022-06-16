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
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}


	*dest = '\0';

	return (ptr);
}
