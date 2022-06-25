#include "main.h"

/**
 * main -  prints number arguments.
 * @argc: count of argv items
 * @argv: array of strings of arguments
 * Return: integer
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	if (argc != 1)
		printf("%d\n", argc - 1);
	printf("%d\n", argc - 1);
	return (0);
}
