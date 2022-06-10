#include <stdio.h>

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
	putchar('\n');
}

/**
* main - fizBuzz challenge
* Return: always (0)
*/

int main(void)
{
	fizz_buzz();
	return (0);
}

