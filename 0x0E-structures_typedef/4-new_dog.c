#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new 'dog'
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the name of its owner
 * Return: pointer to the newcopy or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
