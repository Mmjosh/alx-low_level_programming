#ifndef DOG_H
#define DOG_H

#define NULL ((void *)0) /* simple `NULL` definition */

/**
 * struct dog - defines the qualities of a dog
 * @name: name of the dog
 * @age: its age
 * @owner: whoever owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
