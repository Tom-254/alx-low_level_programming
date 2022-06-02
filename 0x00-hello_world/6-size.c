#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;
	int num;
	long int lnum;
	long long int llnum;
	float fnum;

	printf("Size of a char: %lu byte(s)\n", sizeof(cha));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llnum));
	printf("Size of a float: %lu byte(s)\n", sizeof(fnum));
	return (0);
}
