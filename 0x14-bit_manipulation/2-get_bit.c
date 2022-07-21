#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: binary
 * @index: to return bit at
 * Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_mask = 1;
	unsigned int bit_size = sizeof(n) * 8 - 1;

	if (index > bit_size)
		return (-1);

	if (n & (bit_mask << index))
		return (1);
	else
		return (0);
}
