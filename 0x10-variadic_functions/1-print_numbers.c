#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string to separate the arguments
 * @n: number of parameters
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if ((i + 1) != n)
				printf("%u%s ", va_arg(ap, unsigned int), separator);
			else
				printf("%u\n", va_arg(ap, unsigned int));
		}
		else
		{
			if ((i + 1) != n)
				printf("%u", va_arg(ap, unsigned int));
			else
				printf("%u\n", va_arg(ap, unsigned int));
		}
	}
	va_end(ap);
}
