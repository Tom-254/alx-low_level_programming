#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: points to s
 * @c: points to c
 * Return:  Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
