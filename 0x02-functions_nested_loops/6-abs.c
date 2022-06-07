#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	return (abs(n));
}
