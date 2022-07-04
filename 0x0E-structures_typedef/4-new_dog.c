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
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);

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
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_copy = _strdup(name);

	if (!name_copy && name)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = _strdup(owner);

	if (!owner_copy && owner)
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
