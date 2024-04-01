#include "lists.h"

/**
 * print_dlistint - prints all the elements
 *                  of a dlistint_t list
 * @h: head pointer to dlistint_t list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const  dlistint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
