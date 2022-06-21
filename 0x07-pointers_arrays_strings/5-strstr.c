#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: points to haystack
 * @needle: points to needle
 * Return: Returns a pointer to the beginning of
 * the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0, i, j;

	while (needle[count] != '\0')
	{
		count++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (haystack + (i - count + 1));
			}
		}
	}
	return (NULL);
}
