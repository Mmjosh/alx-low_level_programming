#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the 'struct dog'
 * @d: pointer to the 'struct dog'
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
