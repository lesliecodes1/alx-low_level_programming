#include "lists.h"

/**
 * add_node - adds new node at beginning
 * @str: string to be duplicated
 * Return: new node,
 * null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!*head || !new)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
