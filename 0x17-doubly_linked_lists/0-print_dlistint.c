#include "lists.h"

/**
 * print_dlistint - prints all elements of a `dlistint_t` list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	/* `h` here is an instance of the structure of the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
