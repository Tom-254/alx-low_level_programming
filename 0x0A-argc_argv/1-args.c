#include "main.h"

/**
 * main -  prints number arguments.
 * @argc: count of argv items
 * @argv: array of strings of arguments
 * Return: integer
 */

int main(int argc __attribute__((unused)), char **argv)
{
	if (argc != 1)
		printf("%d\n", argc);
	return (0);
}