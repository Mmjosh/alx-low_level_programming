#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to a 'dog_t' structure
 * @d: pointer to the 'dog_t' structure to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
