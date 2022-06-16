#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: points to to dest
 * @src: ponts to src
 * @n: n-bytes to be used
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (ptr);
}
