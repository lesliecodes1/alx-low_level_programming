#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: linked list starting point
 * @idx: point node is inserted at
 * @n: number inserted
 * Return: inserted node,
 * null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
