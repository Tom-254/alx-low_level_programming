#include "main.h"

/**
 * find_prime -    returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @original: number to check prime
 * @starting: start checking
 * Return:  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 */

int find_prime(int original, int starting)
{
	if (original % starting == 0)
		return (0);

	else if (original == starting)
		return (1);
	else if (original > starting)
		find_prime(original, starting + 1);

	return (1);
}

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number to check prime
 * Return:  returns 1 if the input integer is a
 * prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (find_prime(n, 2));
}
