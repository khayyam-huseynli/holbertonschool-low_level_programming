#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of
 *                          a dlistint_t linked list
 * @head: head pointer to list_t list
 * @index: index of the node, starting from 0
 * Return: returns the nth node of a dlistint_t linked list,
 *         if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	while (h)
	{
		if (count == index)
			return (h);
		count++;
		h = h->next;
	}
	return (NULL);
}
