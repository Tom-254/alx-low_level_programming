#include "main.h"

/**
 * main -   prints all arguments it receives.
 * @argc: count of argv items
 * @argv: array of strings of arguments
 * Return: integer
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
