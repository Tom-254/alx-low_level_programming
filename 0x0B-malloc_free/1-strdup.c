#include "main.h"

/**
 * _strdup -  returns a pointer to a
 * newly allocated space
 * in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to copy
 * Return: character pointer
 */

char *_strdup(char *str)
{
	char *c;
	int count = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		count++;
	}

	count++;

	c = malloc(sizeof(*c) * count);

	if (c == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		c[i] = str[i];
	}

	return (c);

}
