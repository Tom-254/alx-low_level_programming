#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: points to to dest
 * @src: ponts to src
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	char *ptr =  dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (ptr);
}
