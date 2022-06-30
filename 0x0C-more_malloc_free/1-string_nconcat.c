#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to s1
 * @s2: pointer to s2
 * @n: first bytes
 * Return: Returns a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concated;
	int s1count = 0, s2count = 0, text_count = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1count] != '\0')
		s1count++;

	while (s2[s2count] != '\0')
		s2count++;

	concated = malloc(sizeof(char) * (s1count + s2count + 1));

	if (concated == NULL)
		return (NULL);

	if (n >= s2count)
		n = s2count;

	s1count = 0;
	while (s1[s1count] != '\0')
	{
		concated[text_count++] = s1[s1count++];
	}

	for (i = 0; i < n; i++)
	{
		concated[text_count++] = s2[i];
	}

	concated[text_count] = '\0';

	return (concated);
}
