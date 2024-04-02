#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 *                of a dlistint_t list
 * @head: head pointer to list_t list
 * @n: data to be added
 * Return: the address of the new element,
 *         or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (h == NULL)
		h = new;
	else
		h->prev = new;
	new->next = h;
	h->prev = new;
	new->prev = NULL;
	h = new;

	return (h);
}
