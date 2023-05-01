#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of linked list
 * @head: first parameter
 * @n: value of node
 * Return: address of new element,
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = (*head);
		(*head) = new;
		return (*head);
	}
	return (NULL);
}
