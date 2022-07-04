#include "dog.h"

/**
 * _strdup -  returns a pointer to a
 * newly allocated space
 * in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to copy
 * Return: character pointer
 */

char *_strdup(char *str)
{
	char *c;
	int count = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		count++;
	}

	count++;

	c = malloc(sizeof(char) * count);

	if (c == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		c[i] = str[i];
	}

	return (c);

}

/**
 * new_dog -   creates a new dog
 * @name: dog name string pointer
 * @age: dog age
 * @owner: dog owner string pointer
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_copy = _strdup(name);

	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = _strdup(owner);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
