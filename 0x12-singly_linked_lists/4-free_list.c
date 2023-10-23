#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a 'list_t' list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		if (current->str != NULL)
			free(current->str);

		free(current);
	}
}
