#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize.
 * Return: character pointer
 */

char *cap_string(char *str)
{
	int i;
	char next_char;
	char *ptr = str;

	for (i = 0; *str != '\0'; str++, i++)
	{

		if (!(*str >= 'a' && *str <= 'z' || *str >= 48 && *str <= 57 ||
			*str >= 'A' && *str <= 'Z'))
		{
			next_char = *(str + 1);

			if (!(next_char  >= 'A' && next_char <= 'Z' ||
				next_char >= 48 && next_char <= 57) &&
				!(next_char == '\t' || next_char == '\n' || next_char == ' '))
			{
				str++;
				if (*str >= 'a' && *str <= 'z')
				{
					*(str) = *(str) - 32;
				}
			}
		}
	}
	return (ptr);
}
