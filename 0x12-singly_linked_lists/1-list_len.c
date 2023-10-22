#include "lists.h"

/**
 * list_len - Return the No. of elements in a singly linked list.
 * @h: pointer to the head of the list.
 * Return: No. of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t v_x = 0; /* 'v_x' is the element count */

	while (h != NULL)
	{
		h = h->next;
		v_x++;
	}

	return (v_x);
}
