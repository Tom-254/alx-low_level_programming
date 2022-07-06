#include "3-calc.h"

/**
 * main - Entry Point of the program
 * @argc: argument count
 * @argv: arguments passed
 * Return: success;
 */

int main(int argc, char **argv)
{
	int func_calc;
	int (*calc)(int, int);

	if  (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_calc = get_op_func(argv[2]);
	if (func_calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_calc(argv[1], argv[3]));

	return (0);
}
