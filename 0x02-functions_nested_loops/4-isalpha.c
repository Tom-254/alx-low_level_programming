#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - writes to stdout
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{	
	if (isalpha(c))
		return (1);
	else
		return (0);
}
