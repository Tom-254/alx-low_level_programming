#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to separate the arguments
 * @n: number of string parameters
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(ap, char*));
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
