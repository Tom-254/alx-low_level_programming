#include <stdio.h>
#include "main.h"

/**
 * add - writes the character c to stdout
 * @a: The character to add
 * @b: The second character to add
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int b)
{
	return (a + b);
}
