#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
 * struct to_check -stores datatype and its function
 * @check: type to print
 * @func: pointer to a function for checking
 *
 * Description: stores functions easy way to print the right data
 */
struct to_check
{
	char *check;

	void (*func)(va_list ap);
};

/**
 * check_types - Typedef for struct to_check
 */
typedef struct to_check check_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
