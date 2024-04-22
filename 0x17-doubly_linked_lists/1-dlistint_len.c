#include "lists.h"

/**
 * dlistint_len - returns the No. of elements in a linked `dlistint_t`
 * list.
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	/* traversing the list to the end */
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
