#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * string given as a parameter.
 * @s1: character pointer to s1
 * @s2: character pointer to s2
 * Return: character pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int count1 = 0, count2 = 0, total;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[count1] != '\0')
		count1++;

	while (s2[count2] != '\0')
		count2++;

	str = malloc(sizeof(*str) * (count1 + count2 + 1));

	if (str == NULL)
		return (NULL);

	count1 = 0, count2 = 0, total = 0;

	while (s1[count1] != '\0')
	{
		str[total] = s1[count1];
		count1++, total++;
	}
	while (s2[count2] != '\0')
		str[total] = s2[count2], count2++, total++;

	str[total] = '\0';

	return (str);
}
