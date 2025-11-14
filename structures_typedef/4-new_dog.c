#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog (success), NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, name_len = 0, owner_len = 0;

	if (name != NULL)
		while (name[name_len])
			name_len++;

	if (owner != NULL)
		while (owner[owner_len])
			owner_len++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(name_len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(owner_len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;

	return(d);
}
