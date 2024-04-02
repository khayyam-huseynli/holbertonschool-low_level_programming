#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 *                    of a dlistint_t list
 * @head: head pointer to list_t list
 * @n: data to be added
 * Return: the address of the new element,
 *         or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (h == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}

	return (new);
}
