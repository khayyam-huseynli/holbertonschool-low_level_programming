#include "lists.h"

/**
 * dlistint_len - preturns the number of elements in
 *                a linked dlistint_t list
 * @h: head pointer to list_t list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
