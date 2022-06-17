#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize.
 * Return: character pointer
 */
char *cap_string(char *str)
{
	int i;
	char cur_value, next_char;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 48 && str[i] <= 57) ||
			(str[i] >= 'A' && str[i] <= 'Z')))
		{
			next_char = i + 1;
			if (!((str[next_char]  >= 'A' && str[next_char] <= 'Z') ||
				(str[next_char] >= 48 && str[next_char] <= 57)) &&
				!(str[next_char] == '\t' || str[next_char] == '\n'
					|| str[next_char] == ' '))
			{
				if (str[next_char] >= 'a' && str[next_char] <= 'z')
				{
					str[next_char] = str[next_char] - 32;
				}
			}
		}
	}
	return (ptr);
}
