#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o, i;
	dog_t *d;

	n = o = 0;
	while (name[n++])
		;
	while (owner[o++])
		;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(n * sizeof(d->name));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		d->name[i] = name[i];
	}
	d->age = age;
	d->owner = malloc(o * sizeof(d->owner));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < o; i++)
	{
		d->owner[i] = owner[i];
	}

	return (d);
}
