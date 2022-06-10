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
* fizz_buzz - fizBuzz challenge
* Return: void
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
}
