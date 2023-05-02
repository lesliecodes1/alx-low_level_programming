#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of linked list
 * @head: parameter value
 * @n: node value
 * Return: last node value,
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
