#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: points to to dest
 * @s2: points to src
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 <  *s2)
		{
			flag = -15;
		}
		else if (*s1 > *s2)
		{
			flag = 15;
		}
		else
		{
			flag = 0;
		}
		s1++;
		s2++;

	}

	return (flag);
}
