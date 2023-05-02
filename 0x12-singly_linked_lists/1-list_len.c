#include "lists.h"

/**
 * list_len - finds no of nodes on linked list
 * @h: starting point
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	list_t const *new = h;

	while (new != NULL)
	{
		i++;
		new = new->next;
	}
	return (i);
}
