#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int char_count = 0;
	unsigned int n = 0;
	int power = 0;

	if (!b)
		return (0);

	while (b[char_count + 1])
		char_count++;

	while (char_count >= 0)
	{
		if (b[char_count] == '0')
		{
			char_count--;
			power++;
		}
		else if (b[char_count] == '1')
		{
			n += (1 << power);
			char_count--;
			power++;
		}
		else
			return (0);
	}
	return (n);
}
