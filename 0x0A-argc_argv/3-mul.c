#include "main.h"

/**
 * main -   multiplies two numbers.
 * @argc: count of argv items
 * @argv: array of strings of arguments
 * Return: integer for errors
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
}
