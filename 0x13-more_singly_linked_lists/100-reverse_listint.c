#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: starting point of linked list
 * Return: first node in reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = new;
	}
	*head = temp;
	return (*head);
}
