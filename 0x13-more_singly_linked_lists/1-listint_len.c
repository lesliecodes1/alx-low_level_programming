#include "lists.h"

/**
 * listint_len - counts no of elements in a linked list
 * @h: node
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
