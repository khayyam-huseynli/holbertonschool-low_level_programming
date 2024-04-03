#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer to dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
