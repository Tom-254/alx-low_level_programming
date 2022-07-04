#include "dog.h"

/**
 * print_dog -   function that prints a struct dog
 * @d: struct datatype pointer to d
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", "(nil)");
}
