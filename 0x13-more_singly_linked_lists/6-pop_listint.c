#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: start point of linked list
 * Return: 0 if null,
 * 1 when node head deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;

	if (*head == NULL)
		return (0);
	*head = new->next;
	free(new);
	return (1);
}
