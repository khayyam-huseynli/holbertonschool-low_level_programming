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
	unsigned int i = 0, count = 0;

	while (h->next != NULL)
	{
		h = h->next
		count++;
		if (count == index)
			return (h)
	}
	if (index > count)
		return (NULL);

}
