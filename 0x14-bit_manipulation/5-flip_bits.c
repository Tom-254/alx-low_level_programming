#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to
 * flip to get from one number to another.
 * @n: binary
 * @m: to return bit at
 * Return: number of bits to flip to get
 * from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count_flipped = 0;
	unsigned long int bit_mask = 1;

	if (!n || !m)
		return (0);
	while (diff)
	{
		if (diff & bit_mask)
			count_flipped++;
		diff = diff << bit_mask;
	}
	return (count_flipped);
}
