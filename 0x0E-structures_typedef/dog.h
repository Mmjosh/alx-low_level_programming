#ifndef DOG_H
#define DOG_H

#define NULL ((void *)0)
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
