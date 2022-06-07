#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - writes to stdout
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
