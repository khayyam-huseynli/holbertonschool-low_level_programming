#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning
 *                of a list_t list
 * @head: head pointer to list_t list
 * @str: string to be added
 * Return: the address of the new element,
 *         or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = *head;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	if (p == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
		new->next = NULL;
	}
	return (new);
}


/**
 * _strlen - function that returns the length of a string
 * @s: string to be mesured
 * Return: returns size of given string
 */

int _strlen(const char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
