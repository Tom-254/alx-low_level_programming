#include "main.h"

/**
 * main -  adds positive numbers.
 * @argc: count of argv items
 * @argv: array of strings of arguments
 * Return: integer based on results
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i, t, add;

	add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (t = 0; argv[i][t] != '\0'; t++)
		{
			if (argv[i][t] < '0' || argv[i][t] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
