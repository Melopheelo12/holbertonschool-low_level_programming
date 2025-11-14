#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*free_dog - Libère la mémoire allouée pour un dog_t
*@d: pointeur vers la structure dog_t à libérer
*
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
