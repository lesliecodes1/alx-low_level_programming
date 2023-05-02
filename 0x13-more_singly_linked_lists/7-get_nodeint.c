#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: starting point of linked list
 * @index: node returned
 * Return: nth node,
 * null if non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i = 0;

	while (new != NULL)
	{
		if (i == index)
			return (new);
		i++;
		new = new->next;
	}
	return (NULL);
}
