#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize.
 * Return: character pointer
 */
char *cap_string(char *str)
{
	int i;
	int next_char;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i != 0)
		{
			if ((str[i] == '\t' ||
				str[i] == '\n'
				|| str[i] == ' ' || str[i] == ','
				|| str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{'
				|| str[i] == '}'))
			{
				next_char = i + 1;
				if (str[next_char] >= 'a' && str[next_char] <= 'z')
				{
					str[next_char] = str[next_char] - 32;
				}
			}
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (ptr);
}
