#include "lists.h"

/**
 * print_list - prints all the elements
 *              of a list_t list
 * @h: head pointer to list_t list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	list_t *p = h;
	int count = 0;

	printf("\n[");
	while (p != NULL)
	{
		printf(" %d ", p->data);
		p = p->next;
		count++;
	}
	printf("]");
	return (count);
}
