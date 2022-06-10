#include "main.h"

/**
* print - display integers using _putchar
* @number: number to display
* Return: void
*/

void print(int number)
{
	if (number / 10)
		print(number / 10);
	_putchar(number % 10 + '0');
}

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/

void more_numbers(void)
{
	int i, z;

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z < 15; z++)
		{
			print(z);
		}
		_putchar('\n');
	}
}
