#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: points to to dest
 * @src: ponts to src
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	int *ptr =  dest;

	while (*dest)
	{
		dest++;
		count++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}

	*dest = '\0';

	return (ptr);
}
