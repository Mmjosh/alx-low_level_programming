#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a `dlistint_t` list
 * @head: pointer to the pointer that points to the head of the list
 * @n: data to be put inside the new node
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	/* allocating memory for the new node */
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	/* checking if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	/* if the list is empty, `new_node` becomes the new head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* else traverse to the last node */
	while (last->next != NULL)
		last = last->next;

	/* changing `next` of `last` node */
	last->next = new_node;
	/* making `last` as previous of `new_node` */
	new_node->prev = last;

	return (new_node);
}
