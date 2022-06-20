#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: points to s
 * @accept: points to accept
 * Return:  Returns the number of bytes in the
 * initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
