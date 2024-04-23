#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a `dlistint_t` list.
 * @head: pointer to the 1st node of the list
 * @index: index of the node that'll be returned
 * Return: the node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nth_node = head;

	/* traversing till the nth node/the end is reached */
	while (nth_node != NULL && i < index)
	{
		nth_node = nth_node->next;
		i++;
	}

	/* checking if the nth node exists */
	if (i == index)
		return (nth_node);
	else
		return (NULL);
}
