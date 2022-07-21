#include "main.h"

/**
 * clear_bit -   sets the value of a bit to 0 at a given index.
 * @n: binary
 * @index: to return bit at
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_size = sizeof(n) * 8 - 1;
	unsigned int bit_mask = 1;

	if (index > bit_size)
		return (-1);

	*n &= ~(bit_mask << index);
	return (1);
}
