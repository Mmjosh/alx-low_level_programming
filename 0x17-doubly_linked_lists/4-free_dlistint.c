#include "lists.h"

/**
 * free_dlistint - frees a `dlistint_t` list
 * @head: pointer to the 1st node of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/**
	 * before freeing the current node(`head`), a reference
	 * to the next node is stored temporarily in a variable `temp`
	 */
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
