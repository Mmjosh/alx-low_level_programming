#include "lists.h"

/**
 * listint_len - returns the No. of elements in a `listint_t` list.
 * @h: pointer to head of the list.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
