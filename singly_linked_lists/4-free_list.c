#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer to list_t list
 */

void free_list(list_t *head)
{
	list_t *p = head;

	while (p != NULL)
	{
		p = p->next;
		free(p->str);
		free(p);
	}
}
