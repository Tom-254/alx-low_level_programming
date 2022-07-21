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
	unsigned long int diff;
	unsigned int count, i;

	count = 0;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (diff & flipped)
			count++;
		flipped <<= 1;
	}
	return (count);
}
