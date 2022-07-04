#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: size to initialize
 * @name: dog name string pointer
 * @age: dog age
 * @owner: dog owner string pointer
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
