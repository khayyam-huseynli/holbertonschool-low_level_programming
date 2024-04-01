#include "lists.h"

/**
 * list_len - preturns the number of elementsin
 *            a linked list_t lis
 * @h: head pointer to list_t list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
