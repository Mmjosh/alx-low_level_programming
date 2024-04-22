#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a `dlistint_t` list
 * @head: pointer to the pointer that points to the head of the list
 * @n: data to be stored in the new node
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/* checking to see if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
