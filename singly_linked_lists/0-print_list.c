#include "lists.h"

/**
 * print_list - prints all the elements
 *              of a list_t list
 * @h: head pointer to list_t list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int count = 0;

	printf("\n[");
	while (p != NULL)
	{
		if (p->str == NULL)
			*(p->str) = "(nil)";
		printf(" %d ", p->str);
		p = p->next;
		count++;
	}
	printf("]");
	return (count);
}
