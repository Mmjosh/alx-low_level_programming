#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a 'list_t' list
 * @h: pointer to the 1st element of the 'list_t' list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t v = 0; /* 'v' is the node count */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		v++;
	}

	return (v);
}
