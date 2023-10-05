#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates dynamically allocated memory using 'malloc()'
 * and 'free()', the contents will be copied to the newly allocated
 * space in the range from the start of 'ptr' to the minimum of the old
 * and new sizes. extra memory isn't initialized.
 * @ptr: pointer to the initial memory
 * @old_size: size in bytes of the initial memory location before
 * reallocation.
 * @new_size: the new size in bytes
 * Return: pointer to the new 'reallocated' memory or 'NULL'
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;
	unsigned int min_size;

	min_size = (old_size < new_size) ? old_size : new_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0 ; i < min_size ; i++)
		((char *)p)[i] = ((char *)ptr)[i];

	free(ptr);

	return (p);
}
