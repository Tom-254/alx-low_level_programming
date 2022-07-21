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
	unsigned int x_ored = n ^ m;
	int count_flipped = 0;

	if (!n || !m)
		return (0);
	while (x_ored)
	{
		if (x_ored & 1)
			count_flipped++;
		x_ored = x_ored >> 1;
	}
	return (count_flipped);
}
