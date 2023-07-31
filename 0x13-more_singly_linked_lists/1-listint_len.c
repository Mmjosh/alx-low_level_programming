#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
