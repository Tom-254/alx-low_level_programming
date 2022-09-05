#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: points to to dest
 * @s2: points to src
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] <  s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		else if (s1[i] > s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		flag = s1[i] - s2[i];
		i++;
	}

	return (flag);
}
