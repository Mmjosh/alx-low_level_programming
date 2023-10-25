#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a `listint_t` list.
 * @head: pointer to a pointer to the head of the list.
 * Return: data(n) of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
