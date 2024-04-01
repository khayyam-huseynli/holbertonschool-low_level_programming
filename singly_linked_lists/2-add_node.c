#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 *            of a list_t list
 * @head: head pointer to list_t list
 * @str: string to be added
 * Return: the address of the new element,
 *         or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
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
