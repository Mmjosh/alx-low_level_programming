#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a `listint_t` n sets 'head' to NULL.
 * @head: pointer to a pointer to the head of the list.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
