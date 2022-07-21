#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: binary
 * @index: to return bit at
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	*n |= bit_mask << index;

	return (1);
}
